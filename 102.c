//102. WAP that accepts a sentence of words and counts number of words that a sentence has then display each
//words of the sentence in different lines.

#include <stdio.h>

int main()
{
    char sentence[1000];
    int i = 0;

    printf("Enter the sentence: ");
    gets(sentence);

    while(sentence[i] != '\0')
    {
        printf("%c", sentence[i]);
        if(sentence[i] == ' ' && sentence[i+1] != ' ')
            printf("\n");
        i++;
    }
    return 0;
}
