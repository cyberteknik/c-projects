#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void yaz�yaz();

int main()
{
	int i=0,size=0;
	int turn=6;
	char word[]="FREEDOM";
	char g;
	size = strlen(word);
	char guess[]="______";

	printf("Enter a letter\n");
	scanf("%d",&g);
	
	
	for(i=0;i<size;i++)
	{
		if(g=word[i])
		{
	     yaz�yaz(g);
		}
		else
		turn=turn-1;
	}
	
	system("pause");
	return 0;
}
void yaz�yaz(char a)
{
	printf("%c",a);
	
}
