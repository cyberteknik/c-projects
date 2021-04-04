#include <stdio.h>

/*Bit recorder*/


main()
{
	
    unsigned short  int  N;
    unsigned char Bits[16]={0};
    unsigned short int  mask=32768;
    int i,k=0;
    
    printf("\nPlease enter the number :");
    scanf("%d",&N);
    printf("\n");
    
    for(i=0;i<=15;i++){
    	
    	if ((N&mask) == 0){
    		Bits[i]=0;
		}
    	else if((N&mask) == mask){
    		Bits[i]=1;
		}
		
		printf("%d",Bits[i]);
		/*printf("\n%d",mask);*/
    	mask = mask>>1;
    
	}
  
   printf("\n");
   
   /*for (k=0;k<=i;k++)
	printf("%d",Bits[k]);*/
    		
				
}
