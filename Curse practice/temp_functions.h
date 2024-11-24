#include <stdio.h>
#include <stdint.h>
#include <string.h>



struct sensor {
    uint16_t year;
    uint8_t month;
    uint8_t day;
    uint8_t hour;
    uint8_t minuts;
    int8_t t;
};



void fileReader(char inputFile[], struct sensor* temp, struct sensor* data);
float Average(struct sensor* data, int loadedlines);
int minT (struct sensor* data, int loadedlines);
int maxT (struct sensor* data, int loadedlines);
void prHelp ();
void intro();
int StrtoInt(char text[]);