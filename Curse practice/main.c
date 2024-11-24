#include <stdio.h>
#include <stdint.h>
#include "temp_functions.h"
#include <stdlib.h>
#include <unistd.h>

extern int loadedlines;
int SIZE = 530000;
char inputFile[60];
int basemonth = 0, scanMonthflag = 0, baseYear = 0, debugFlag = 0;


void printdata(struct sensor* data, int number)
{
    for (int i =0; i <= (number-1); i++)
    {
        printf("%2d-%02d-%02d-%02d   %d\n", data[i].year, data[i].month, data[i].day, data[i].minuts, data[i].t);
    }
}


int main(int argc, char **argv)
{
    void intro();
    int rez=0;
    // opterr=0; //uncoment for error msg.
    
    while ( (rez = getopt(argc,argv,"hy:f:m:d")) != -1)
    {
        switch (rez)
        {
            case 'h': 
				prHelp (); 
			break;

            case 'f': 
				if ( optarg[0] == '-' )
                { 
                    printf("не указано имя файла\n");
                    return 0;
                }
                strcpy(inputFile, optarg);
			break;

             case 'y': 
			    if ( optarg[0] == '-' )
                { 
                    printf("не указан год\n");
                    return 0;
                }
                baseYear = atoi(optarg);
			break;

            case 'm': 
			    if ( optarg[0] == '-' )
                { 
                    printf("не указан номер месяца\n");
                    return 0;
                }
                basemonth = atoi(optarg);
                scanMonthflag = 1;
			break;

            case '?': 
				printf("неправильно указаны параметры\n");
			break;

            case 'd': 
				debugFlag = 1; 
			break;
        };
    };

    struct sensor temp[2];
    struct sensor* data = malloc(SIZE*sizeof(struct sensor));
    if(!data) return -1;
	fileReader(inputFile, temp, data);
    printf("Максимальная температура = %d\n", maxT(data, loadedlines));
    printf("Минимальная температура = %d\n", minT(data, loadedlines));
    printf("average = %.2f\n", Average(data, loadedlines));
    free(data);
	return 0;
}
