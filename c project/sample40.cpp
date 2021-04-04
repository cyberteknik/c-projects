#include<stdio.h>
#include<stdlib.h>
#define SIZE 40

void printWord(char sentence[] , int WordNum);
int findLength(char word[]);
void findWord(char sentence[] , char word[] , int wordLength);

int main()
{
	char sentence[]="EE103 Introduction to Programming";
	int wordNum;
	char word[SIZE];
	printf("Enter the word number:");
	scanf("%d",&wordNum);
	fflush(stdin);
	printWord(sentence,wordNum);
	printf("\nEnter the word:");
	gets(word);
	printf("Word length is %d\n",findLength(word));
	findWord(sentence,word,findLength(word));
	system("pause");
	return 0;
}

void printWord(char sentence[], int WordNum)
{
	int i,j,k=1;
	char c[SIZE];
	
	for(i=0,j=0;sentence[i]!='\0';i++)
	{
	if(sentence[i]!=' '&& k==WordNum)
	{
	c[j]=sentence[i];
	j++;
	}
	}
	if(sentence[i]==' ')
	{
		k++;
	}
	c[i]='\0';
	printf("%s",c);

	
	
	
}
