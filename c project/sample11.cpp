#include <stdio.h>
#include <stdlib.h>
int minimum(int dizi[]);

int main()
{
	int n,i;
	int notlar[n];
	printf("girilecek not sayýsý:");
	scanf("%d",n);
	printf("notlarý giriniz");
	for(i=0;i<n;i++)
	{
		scanf("%d",&notlar[i]);
	}
	
    int enkucuk = minimum(notlar);
	printf("%d\n",enkucuk);
	system("pause");
	return 0;
}
int minimum(int dizi[])
{
	int n;
    int i;	
	int enkucuk;
	enkucuk = dizi[0];
	for(i=1;i<n;i++)
	{
		if(dizi[i] < enkucuk)
		enkucuk = dizi[i];
	}
	return enkucuk;
}
