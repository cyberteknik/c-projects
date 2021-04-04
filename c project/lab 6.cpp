#include<stdio.h>
#include<stdlib.h>

int toplama (double sayı1,double sayı2);
{	
double c=0
c= sayı1 + sayı2;

return c;
}

int cıkarma(sayı1,sayı2);
{
	if(sayı1>sayı2)
	return sayı1 - sayı2;
	if(sayı2>sayı1)
	return sayı2 -sayı1;
}

int carpma(sayı1,sayı2);
{
return sayı1 * sayı2;	
}

double bolme (sayı1,sayı2);
{
return sayı1 / sayı2;	
}
int po(sayı1,sayı2);
{
int i=0;
int k=0;
for(i=0;i<=sayı2;i++)
k++;
return sayı1^k;
}

	int main()
{
	int a,b;
	int işlem;
	printf("enter two numbers: ");
	scanf("&d &d",&a,&b);
	printf("yapmak istediğiniz işlemi seciniiz: \n",işlem);
	printf("1:toplama 2:cıkarma 3:carpma 4:bolme 5:pow");
	scanf("%d",işlem)
	switch(işlem) 
	{
	case 0: retun 0;
	break;	
	case 1:printf("%d",toplama(a,b);
	break;
	case 2:printf("%d",cıkarma(a,b));
	break;
	case 3:printf("%d",carpma(a,b));
	break;
	case 4printf("%d",bolme(a,b));
	break;
	case 5:printf("%d,"po(a,b));
	break;
	default:printf("duzgun sayı gırınız");
	}
	
	
	return 0;
}


	

