#include <stdio.h>

/*This programme shows basic bit operations*/

main()
{
	
	unsigned char c=1;
	
	while ((c=c << 1) != 0)
		printf("\nc=%d",c);	
	
}
