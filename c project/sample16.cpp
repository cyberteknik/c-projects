#include <stdio.h>

//Displaying ASCII codes using a for loop with printf and putchar//

//Whay is there a gap after 10 th line ? //

//Problem:How can we modify this  code so that only capital(upper case)
//lowe case letters are displayed.


main()

{
	int i;
	printf("====  ASCI CODES ========\n");
	printf("\n");	
	
	for (i=0; i <= 255; i++){
		
		printf("%d	",(255-i));
		printf("\t");
		putchar((255-i));
		printf("\n");
	}
		
		//printf('%c',i);//
		

	putchar(1000)
	
}
