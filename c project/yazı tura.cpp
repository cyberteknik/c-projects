#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int a, yazi=0, tura=0, kac_kere, i;
	printf("kaç kere atýlsýn:");
	scanf("%d", &kac_kere);
	srand(time(NULL));
	for (i = 0; i < kac_kere; i++) 
	{
		a = rand() % 2;
		if (a == 1)
			yazi++;
		else
			tura++;
			
	}
	printf("yazi:%d-tura:%d\n", yazi, tura);


		system("pause");
	return 0;
}
