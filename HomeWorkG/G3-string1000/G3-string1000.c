#include <stdio.h>
#include <string.h>

#define DEBUGPRINT fprintf(stderr, "debug in %d line\n", __LINE__)
FILE *f;

int FileScan(char fileName[], char Text[])
{
  
    int lenghtText = 0;
    char c;
    f = fopen(fileName, "r");
    while(((c = getc(f)) != EOF) && (c != '\n'))
        Text[lenghtText++] = c;
    Text[lenghtText] = '\0'; 
    fclose(f);
    
     f = fopen ("output.txt", "w");
    for( int i =0; i < (lenghtText-1); i++)
        {
            if(Text[i] == Text[lenghtText-1]) fprintf(f, "%d ", i);
        }
    fclose(f);
    return 0;
}


// int Foutput (char fileName[], char text[])
// {
//     f = fopen (fileName, "w");
//     fprintf(f, "%s", text);
//     fclose(f);
//     return 0;
// }


int main(void)
{ 
    char inputFile[20] = "input.txt", outputFile[20] = "output.txt", Text[1000] = {};
    FileScan(inputFile, Text);
    // Foutput(outputFile, Text);
    return 0;
}