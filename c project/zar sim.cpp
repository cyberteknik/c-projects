#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int hangi[7]={0,0,0,0,0,0,0};
	int i=0;
	int kackez=0;
	int zar=0;

	printf("zar kaç kez atýlsýn: ");
	scanf("%d",&kackez);
	
	srand(time(NULL));
	
	for(i=0;i<kackez;i++)
	{
		zar=rand() % 6 + 1;
		hangi[zar]++;
	}
	
	for(i=1;i<=6;i++)
	{
		printf("%d ",i);
		printf("%d\n",hangi[i]);
	
		
	}
	
	
	
	
	system("pause");
	return 0;
}
