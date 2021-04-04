# include <stdio.h>
#include <stdlib.h>

double fibo(int z);

int main()
{

double k;

int sayi;

printf ("enter an integer number:");

scanf("%d",&sayi);
k = fibo(sayi);

printf ("%2.lf",k);

getchar();getchar();

return 0;

}
double fibo(int z)

{

double x , y;

if (z<=1)

return z;

else


{


x = fibo( (z-1) ) ;


y = fibo( (z-2) ) ;


return ( x + y);


}


}
