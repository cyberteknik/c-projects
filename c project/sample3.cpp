#include <stdio.h>
#include <stdlib.h>

int main()
{
	float ort,toplam;
	int i,grade;
	int sayac=1;
	printf("not giriniz\n ");
	
	while(grade!=-1)
{
	printf("%d. notu giriniz: ",sayac);
	scanf("%d",&grade);
	sayac++;
	toplam+=grade;
	}	
	ort=(toplam+1)/(sayac-2);
	printf("%f",ort);
	
	
	
	return 0;
}
