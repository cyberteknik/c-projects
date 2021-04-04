#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int sonuc=0;
	int a,b,c;
	printf("a ve b degerlerini giriniz: ");
	scanf("%d %d",&a,&b);
	c=a*a+b*b;
	sonuc= sqrt(c);
	printf("%d",sonuc);
	return 0;
}
