#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;
	int i;
	int sonuc=0;
	float ort;
	printf("bir sayý gir: ");
	scanf("%d",&a);
	for(i=0;i<=a;i++)
	sonuc+=i;
	//printf("%d\n",sonuc);
	ort = sonuc/a;
	printf("%f.2",ort);
	return 0;
	
	
}
