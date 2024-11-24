#include "temp_functions.h"

extern char filename[];
int errorline = 0;
extern int baseYear;
extern int scanMonthflag;
extern int basemonth, debugFlag;
int loadedlines = 0;
int daysInM [13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int StrtoInt(char text[])
{
	int number = 0;
	sscanf(text, "%d", number);
	return number;
}


int VisokosYear(int year)
{
	if (baseYear%400 == 0)	 return 1;
	if (baseYear%100 == 0)	 return 0;
	if (baseYear%4 == 0)	 return 1;
	return 0;
}

void RecordtoStr(struct sensor* temp, uint16_t year, uint8_t month, uint8_t day, int8_t hour, uint8_t minuts, int8_t t)
{
    temp[0].year = year;
    temp[0].month = month;
    temp[0].day = day;
	temp[0].hour = hour;
	temp[0].minuts = minuts;
    temp[0].t = t;
}

int Errorcheck (struct sensor* temp)
{
	int flag = 0;
	if (temp[0].year != baseYear) flag = 1;
	if (temp[0].month < 1 || temp[0].month > 12) flag = 1;
	if (temp[0].month == 2)
	{
		if (temp[0].day < 1|| temp[0].day > ( daysInM[temp[0].month] + VisokosYear(baseYear) )) flag = 1;
	}
	else
	{
		if (temp[0].day < 1|| temp[0].day > daysInM[temp[0].month]) flag = 1;
	}
	if (temp[0].hour < 0 || temp[0].hour > 24) flag = 1;
	if (temp[0].minuts < 0 || temp[0].minuts > 60) flag = 1;
	if (temp[0].t < -100 || temp[0].t > 100) flag = 1;
	return flag;
}


void fileReader(char inputFile[], struct sensor* temp, struct sensor* data)
{
	int Y, M, D, H, minuts, T, scans, succsessScan = 0, badlines = 0;
	char tmp[20];
	FILE* f = fopen(inputFile,"rb"); 
	while( (scans = fscanf(f, "%d;%d;%d;%d;%d;%d",  &Y, &M, &D, &H, &minuts, &T)) > 0)
	{
		if (scans < 6)
		{
			scans = fscanf(f, "%[^\n]", tmp);
			errorline++;
			continue;
		}
		RecordtoStr(temp, Y, M, D, H, minuts, T);
		if (Errorcheck(temp) > 0)
		{
			badlines++;
			continue;
		}
		if (scanMonthflag == 1)
			{
				if (temp[0].month != basemonth) continue;
			}
		succsessScan++;
		data[loadedlines++] = temp[0];
	}
	if (debugFlag == 1)
	{
		printf("succsess scans = %d\n", succsessScan);
		printf("bad lines = %d\n", badlines);
		printf("error lines = %d\n", errorline);
	}
}


int maxT (struct sensor* data, int loadedlines)
{
	int max = data[0].t;
	for (int i = 0; i < loadedlines; i++)
	{
		
		if (max < data[i].t) max = data[i].t;
	}
return max;
}

int minT (struct sensor* data, int loadedlines)
{
	int min = data[0].t;
	for (int i = 0; i < loadedlines; i++)
	{
		
		if (min > data[i].t) min = data[i].t;
	}
return min;
}

float Average(struct sensor* data, int loadedlines)
{
	float averg = data[0].t;
	for (int i = 1; i < loadedlines; i++)
	{
		averg += data[i].t;
	}
	averg /= (float)loadedlines;
	return averg;
}

void prtGraphM (struct sensor* data, int loadedlines, int month)
{
	int min = minT(data, loadedlines), max= maxT(data, loadedlines);
	int VertSIZE, HorSIZE;
	VertSIZE = max - min +4;
	HorSIZE = daysInM[month]+ 4;
	int Graph [VertSIZE][HorSIZE];
}

void GrathLines (int Grath[][], int VertSIZE, int HorSIZE)
{

}

float AverForDay (struct sensor* data, int loadedlines, int month, int day)
{
	int sumDay= 0, countDay = 0;
	float averDay = 0;
	for (int i=0; i < loadedlines; i++)
	{
			if ( (data[i].month == month) && (data[i].day == day) )
			{
				sumDay += data[i].t;
				countDay++;
			}
	}
	averDay = sumDay/ (float) countDay;
	return averDay;
};
