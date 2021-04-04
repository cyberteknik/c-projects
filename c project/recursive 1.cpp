#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,j,last;
	float pi,s1=0.0,s2=0.0;
	printf("enter the last integer:");
	scanf("%d",&last);
	
	for(i=3;i<=last;i+=4)
	{
		s2=s2+(1.0/i);
	}
	for(j=1;j<=last;j+=4)
	{
		s1=s1+(1.0/j);
	}
	
	pi=4*(s1-s2);
	printf("%f",pi);
	
	return 0;
}
