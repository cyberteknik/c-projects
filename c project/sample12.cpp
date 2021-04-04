#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int sayi=6;
	int *sayiptr = &sayi;
	printf("%d\n", *sayiptr);
	*sayiptr = *sayiptr + 5;
	printf("%d\n", *sayiptr); 
	


	system("pause");
	
	return 0;
}
