#include <stdio.h>

int main()
{
    char dizi[150];
    int i, vowels, consonants, digits, spaces;

    vowels =  consonants = digits = spaces = 0;

    printf("Enter a line of string: \n");
    scanf("%[^\n]", dizi);

    for(i=0; dizi[i]!='\0'; ++i)
    {
        if(dizi[i]=='a' || dizi[i]=='e' || dizi[i]=='i' ||
           dizi[i]=='o' || dizi[i]=='u' || dizi[i]=='A' ||
           dizi[i]=='E' || dizi[i]=='I' || dizi[i]=='O' ||
           dizi[i]=='U')
        {
            ++vowels;
        }
        else if((dizi[i]>='a'&& dizi[i]<='z') || (dizi[i]>='A'&& dizi[i]<='Z'))
        {
            ++consonants;
        }
        else if(dizi[i]>='0' && dizi[i]<='9')
        {
            ++digits;
        }
        else if (dizi[i]==' ')
        {
            ++spaces;
        }
    }

    printf("Vowels: %d",vowels);
    printf("\nConsonants: %d",consonants);
    printf("\nDigits: %d",digits);
    printf("\nWhite spaces: %d", spaces);

    return 0;
}

