#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,b,i,j;
	printf("enter 2 integers: \n");
	scanf("%d %d",&a,&b);
	if(a<b)
	{
	for(j=2;j<=b;j++)
	i=a;
	while(i<=b)
	{
	i++;
	if(i % j==0);
	printf("%d",i);
	}
	}
	

    else(a>b);
    {
    	for(j=2;j<=a;j++)
    
    	{
    		i=b;
    while(i<=a)
    {
    	i++;
    	if(i % j ==0);
    	printf("%d",i);
	}
			}
    		
		}
		
			return 0;
}
	


