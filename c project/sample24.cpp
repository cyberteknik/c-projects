#include <stdio.h>

/*Writing char data to int shifting int data and writing back to char*/
/*Chage the definition of c to uns?gned char*/


main()
{
	
	int m=0;
	char c=255;
	
	printf("%d",c);
	m=((m=c) << 2);
	//c=m;

	printf("\nc=%d",m);	
	
		
}
