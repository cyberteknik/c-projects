#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,j;
	float pi,k=0.0,m=0.0;
	for (i=1;i<=99;i+=4)
{
		k=k+(1.0/i);
}

    for(j=3;j<=99;j+=4)
    {
    	m=m+(1.0/j);
	}
	pi=4*(k-m);
	printf("%f",pi);
}

