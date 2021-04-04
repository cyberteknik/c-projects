#include <stdio.h>

/*Generating bit masks*/

main()
{
	
	unsigned char m=0;
	unsigned char n=1;
	
	while(n != 0){
	    m=(m|n);
		n=n<<1;		
	}  
		
	printf("\nm=%d",m);
				
}
