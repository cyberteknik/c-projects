#include<stdio.h>
#include<stdlib.h>

int toplama (double say�1,double say�2);
{	
double c=0
c= say�1 + say�2;

return c;
}

int c�karma(say�1,say�2);
{
	if(say�1>say�2)
	return say�1 - say�2;
	if(say�2>say�1)
	return say�2 -say�1;
}

int carpma(say�1,say�2);
{
return say�1 * say�2;	
}

double bolme (say�1,say�2);
{
return say�1 / say�2;	
}
int po(say�1,say�2);
{
int i=0;
int k=0;
for(i=0;i<=say�2;i++)
k++;
return say�1^k;
}

	int main()
{
	int a,b;
	int i�lem;
	printf("enter two numbers: ");
	scanf("&d &d",&a,&b);
	printf("yapmak istedi�iniz i�lemi seciniiz: \n",i�lem);
	printf("1:toplama 2:c�karma 3:carpma 4:bolme 5:pow");
	scanf("%d",i�lem)
	switch(i�lem) 
	{
	case 0: retun 0;
	break;	
	case 1:printf("%d",toplama(a,b);
	break;
	case 2:printf("%d",c�karma(a,b));
	break;
	case 3:printf("%d",carpma(a,b));
	break;
	case 4printf("%d",bolme(a,b));
	break;
	case 5:printf("%d,"po(a,b));
	break;
	default:printf("duzgun say� g�r�n�z");
	}
	
	
	return 0;
}


	

