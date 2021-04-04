#include <stdio.h>
#include <stdlib.h>

int kareal(int sayı)
{
	
	return sayı * sayı;
}

int main()
{
	int kare;
	
	kare=kareal(9);
	
	printf("%d\n",kare);
	
	system("pause");
	
	
	return 0;
}
