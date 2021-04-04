#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int dizi[6];
	int sayi,i=0;
	int toplam=0;
	int ort;
	
	srand(time(NULL));
	
	for(i=0;i<6;i++)
	{
		sayi=rand();
		printf("%d\n",sayi);
		toplam = toplam + dizi[sayi] ;
	}
	ort = toplam / 6;
	printf("ortalama =%d ",ort);
	return 0;
}

