#include <stdio.h>
#include <stdint.h>
#include "temp_functions.h"
#include <stdlib.h>
#include <unistd.h>

extern int loadedlines;
int SIZE = 530000;
char inputFile[60], GenFile[60];
int basemonth = 0, scanMonthflag = 0, baseYear = 0, debugFlag = 0, genFlag = 0;


int main(int argc, char **argv)
{
    intro();
    int rez=0;
    // opterr=0; //uncoment for error msg.
    if (argc == 1)
    {
        prHelp();
        return 0;
    }
    
    while ( (rez = getopt(argc,argv,"hy:f:m:dg:")) != -1)
    {
        switch (rez)
        {
            case 'h': 
				prHelp (); 
                return 0;
			break;

            case 'f': 
				if ( optarg[0] == '-')
                { 
                    printf("не указано имя файла\n");
                    return 0;
                }
                strcpy(inputFile, optarg);
			break;

            case 'g': 
				if ( optarg[0] == '-' )
                { 
                    printf("не указано имя файла\n");
                    return 0;
                }
                strcpy(GenFile, optarg);
                genFlag = 1;
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
    int BaddataChance = 20; // вероятность плохих данных в новом файле, чем меньше значение тем больше
    if(!data) return -1;
	fileReader(inputFile, temp, data);
    printf("Максимальная температура = %d\n", maxT(data, loadedlines));
    printf("Минимальная температура = %d\n", minT(data, loadedlines));
    printf("average = %.2f\n", Average(data, loadedlines));
    if (genFlag == 1 ) NewFgen (GenFile, BaddataChance);
    free(data);
	return 0;
}
