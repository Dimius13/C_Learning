#include <stdio.h>

#define DEBUGPRINT fprintf(stderr, "debug in %d line\n", __LINE__)
FILE *f;

int Fscan(char fileName[], char text[])
{
    int counter = 0;
    char c;
    f = fopen(fileName, "r");
    while(((c = getc(f)) != EOF) && (c != '\n'))
        text[counter++] = c;
    text[counter] = '\0'; 
    fclose(f);
    return counter;
}

int Foutput (char fileName[], char text[], int counter)
{
f = fopen (fileName, "w");
fprintf(f, "%s, %s, %s %d", text, text, text, counter);
fclose(f);
return 0;
}


int main(void)
{ 
    char inputFile[20] = "input.txt", outputFile[20] = "output.txt", text[110];
    int counter = Fscan(inputFile, text);
    Foutput(outputFile, text, counter);
    return 0;
}