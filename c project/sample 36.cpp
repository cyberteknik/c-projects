#include <stdio.h>
void reverseSentence();

int main()
{
    printf("Enter a sentence: ");
    reverseSentence();

    return 0;
}

void reverseSentence()
{
    char c;

    if( c != '\n')
    {
        reverseSentence();
        printf("%c",c);
    }
}
