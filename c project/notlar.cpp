#include <stdio.h>
#include <stdlib.h>
int minimum(int dizi[]);

int main()
{
	int notlar[6] = {80,99,60,100,75,23};
	int enkucuk = minimum(notlar);
	printf("%d\n", enkucuk);
	system("pause");
	return 0;
}
int minimum(int dizi[])
{
	int enkucuk;
	enkucuk = dizi[0];
	int i;
	for (i = 1; i < 6; i++)
		if(dizi[i] < enkucuk)
			enkucuk = dizi[i];

	return enkucuk;

}
