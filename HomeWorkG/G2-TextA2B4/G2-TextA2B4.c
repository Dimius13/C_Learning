#include <stdio.h>

#define DEBUGPRINT fprintf(stderr, "debug in %d line\n", __LINE__)
FILE *f;

int FileScan(char fileName[])
{
    int number, sum =0;
    f = fopen(fileName, "r");
    fscanf (f, "%d", &number);
    fclose(f);
    return number;
}

void FormText (int number, char Text[])
{
    int letterAdd = 0, numAdd = 0;
    for(int i = 0; i < number; i++)
    {
        if((i+1)%2 != 0)
            {
                Text[i] = 'A'+ letterAdd;
                letterAdd++;
                continue;
            }
        else
        {
            if(numAdd == 8) numAdd = 0;
            Text[i] = '2'+ numAdd;
            numAdd += 2;
        }
    }
    return;
}

int Foutput (char fileName[], char text[])
{
    f = fopen (fileName, "w");
    fprintf(f, "%s", text);
    fclose(f);
    return 0;
}


int main(void)
{ 
    char inputFile[20] = "input.txt", outputFile[20] = "output.txt", Text[28];
    FormText(FileScan(inputFile),Text);
    Foutput(outputFile, Text);
    return 0;
}