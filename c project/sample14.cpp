#include <stdio.h>

//Adding two numbers defined as charactaers.
main()
{

char m;	
char n;
char sum;
	//mantýk: getchar ile m ve n deðeri alýnýr '0' ile ise bu deðerler ascý tablosundaki deðerlerine taþýnýr
m=getchar();
n=getchar();

sum = m -'0' + n - '0';
printf("m=%d-n=%d\n",m,n);
	
	
}
