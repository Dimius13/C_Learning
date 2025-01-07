#include "temp_functions.h"

extern int daysInM [];
extern int baseYear;
extern int BaddataChance;
extern char filename[];


int tempByMonth [13] = {-10, -30, -8, 4, 10, 20, 25, 34, 25, 15, 3, -1, -10}; 


int month = 1, day = 1, hour = 0, minuts = 1;

void TimeInc ()
{
	if (minuts  > 59)
	{
		minuts = 1;
		hour++;
	}

	if (hour  > 24)
	{
		hour = 0;
		day++;
	}

	if ( month == 2)
	{
		if (day > ( daysInM[month]+ VisokosYear(baseYear) ) )
		{
			day = 1;
			month++;
		}
	}
	else
	{
		if (day > daysInM[month] )
		{
			day = 1;
			month++;
		}
	}

	
}

float TempMinut (struct sensor* NewDTmp)
{
	float TempPartD, TempForDay, TempH, TempPartM, nextH;
	TempPartD =  ( tempByMonth[NewDTmp[0].month] - tempByMonth[NewDTmp[0].month -1] ) / (float) ( daysInM[NewDTmp[0].month] - 1 );
	TempForDay = tempByMonth[NewDTmp[0].month] + (NewDTmp[0].day) * TempPartD;
	int i= NewDTmp[0].minuts;
		if (NewDTmp[0].hour < 12)
	{
		TempH = TempForDay - 7 + (14/11) * NewDTmp[0].hour;
		nextH = TempForDay - 7 + (14/11) * (NewDTmp[0].hour+1);
		TempPartM = ( nextH - TempH) / 60;
		return (TempH - TempPartM * NewDTmp[0].minuts);
	}
	else
	{
		TempH = TempForDay + 7 - (14/11) * (NewDTmp[0].hour - 12);
		nextH = TempForDay + 7 - (14/11) * ((NewDTmp[0].hour+1) - 12);
		TempPartM = ( TempH - nextH ) / 60;
		return (TempH - TempPartM * NewDTmp[0].minuts);
	}
}



void NewFgen (char filename[], int BadChance)
{
	struct sensor NewDTmp[2];
	int minutesInYear = 525600 + VisokosYear(baseYear)*1440;
	FILE* f = fopen(filename,"wb");
	for (int i = 1; i < minutesInYear; i++)
	{ 
		TimeInc();
		NewDTmp[0].year = baseYear;
		NewDTmp[0].month = month;
		NewDTmp[0].day = day;
		NewDTmp[0].hour = hour;
		NewDTmp[0].minuts = minuts;
		NewDTmp[0].t = TempMinut(NewDTmp);

//next code add errors to data


		srand(i);
		int RtmpY = rand() % BadChance;
		if ( RtmpY == 0 )
		{
			NewDTmp[0].year = baseYear -3000;
		}

		srand(i-110);
		RtmpY = rand() % BadChance;
		if ( RtmpY == 0 )
		{
			NewDTmp[0].hour = hour + 300;
		}

		srand(i+391);
		RtmpY = rand() % BadChance;
		if ( RtmpY == 0 )
		{
			NewDTmp[0].minuts = minuts - 89;
		}

		srand(i+100);
		RtmpY = rand() % BadChance;
		if ( RtmpY == 0 )
		{
			NewDTmp[0].day = day - 400;
		}

		srand(i+33);
		RtmpY = rand() % BadChance;
		if ( RtmpY == 0 )
		{
			NewDTmp[0].month = month + 70;
		}


		fprintf(f, "%d;%d;%d;%d;%d;%d\n", NewDTmp[0].year, NewDTmp[0].month, NewDTmp[0].day, NewDTmp[0].hour, NewDTmp[0].minuts, NewDTmp[0].t);
		
		minuts += 1;
	}
 return;
}