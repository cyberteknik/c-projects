#include <stdio.h>

//Adding two numbers defined as charactaers.
main()
{

char m;	
char n;
char sum;
	//mant�k: getchar ile m ve n de�eri al�n�r '0' ile ise bu de�erler asc� tablosundaki de�erlerine ta��n�r
m=getchar();
n=getchar();

sum = m -'0' + n - '0';
printf("m=%d-n=%d\n",m,n);
	
	
}
