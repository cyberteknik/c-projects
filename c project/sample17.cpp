#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	
	printf("-----ASCI CODES-----");
	printf("\n");
	
	for(i=0;i<255;i++)
	{
		printf("%d",i);
		printf("\t");
		putchar(i);
		printf("\n");
		
	}
	
	system("pause"); 
	return 0;
}
