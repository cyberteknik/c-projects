#include<stdio.h>
#include<stdlib.h>

int main()
{
	int taban,us;
	int sonuc =1;
	printf("taban sayi giriniz:");
	scanf("%d",&taban);

	printf("�s olan sayiyi giriniz");
	scanf("%d",&us);
	
	while(us!=0)
	{
		sonuc = sonuc * taban;
		us--;
	}
	
	printf("sonuc = %d",sonuc);
	
	system("pause");
	return 0;
}
