#include <stdio.h>
#include <stdint.h>
#include "temp_functions.h"
#include <stdlib.h>
#include <unistd.h>

extern int loadedlines;
int SIZE = 530000;



char inputFile[60] = "temperature_small.csv";

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
    //opterr=0 //uncoment for error msg.
    
    while ( (rez = getopt(argc,argv,"hy:f:m:")) != -1)
    {
        switch (rez)
        {
            case 'h': 
				prHelp (); 
			break;
            case 'f': 
				printf("found argument \"f = %s\".\n",optarg); 
			break;
            case 'm': 
				printf("found argument \"m = %s\".\n",optarg); 
			break;
            case '?': 
				printf("Error found !\n");
			break;
        };
    };

    struct sensor temp[2];
    struct sensor* data = malloc(SIZE*sizeof(struct sensor));
    if(!data) return -1;
	fileReader(inputFile, temp, data);
    // printdata(data, loadedlines);
    printf("average = %.2f", Average(data, loadedlines));
    free(data);
	return 0;
}
