//103. WAP to find whether a given word is present in a given sentence or not.

#include <stdio.h>

int main()
{
    char sentence[1000], word[25], *temp;
    int i = 0;

    printf("Enter the sentence: ");
    gets(sentence);

    printf("Enter the word to search: ");
    gets(word);

    temp = strstr(sentence, word);

    if(temp != '\0')
    {
        printf("The word is present.");
    }
    else
    {
        printf("The word is not present.");
    }

    return 0;
}
