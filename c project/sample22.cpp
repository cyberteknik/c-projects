#include <stdio.h>

/*This programme shows basic bit operations*/




main()
{
	
	int  n=1;
	int i=0;
	
	do 
	{
		
		printf("\ni=%d\tn=%d",i,n);	
		i++;
	}
	
	while ((n=n << 1) != 0);	
	
}
