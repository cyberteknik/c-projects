#include <stdio.h>

/*This programme shows basic bit operations*/

main()
{
	
	signed char c=1;
	
	do 
	{
		printf("\nc=%d",c);	
	}
	
	while ((c=c << 1) != 0);	
	
}
