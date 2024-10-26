#include <stdio.h>

int main(void)
{
	char targetText = ' ';
	for(scanf("%c", &targetText) ; targetText != '.' ; scanf("%c", &targetText))
    {
        if ( targetText >='A' &&  targetText <= 'Z')
            targetText += 0x20;
        if  (targetText != '.')
            printf("%c", targetText);
    }

	return 0;
}

