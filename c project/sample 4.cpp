#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i=0;
	int toplam=0;
	for(i=1;i<=59;i+=2)
	toplam+=i*(i+1);
	printf("toplam: %d",toplam);
	
	return 0;
}
