#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	int array1[100];
    int array2[100];
    int array3[100];
	for(i=0;i<100;i++)
	{
	//array1[100]=i;
	//printf("array1[%d]=%d\n",i,i);

	array2[100]=(99-i);
	//printf("array2[%d]=%d\n",i,(99-i));
	
	array3[i] = array1[i] * array2[i];
	printf("array3[%d]=%d\n",i,array3[i]);
	
	}
	
	return 0;
	}
	

