#include <stdio.h>
#include <stdlib.h>


int main()
{
	int a,b;
	int i�lem;
	printf("enter two numbers: ");
	scanf("&d &d",&a,&b);
	printf("yapmak istedi�iniz i�lemi seciniiz: \n",i�lem);
	printf("1:toplama2:c�karma3:carpma4:bolme");
	scanf("%d",i�lem)
	switch(i�lem) 
	{
		
	case 1:printf("%d",a+b);
	break;
	case 2:printf("%d",a-b);
	break;
	case 3:printf("%d",a*b);
	break;
	case 4printf("%d",a/b);
	break;
	default:printf("duzgun say� g�r oc");
	}
	
	
	return 0;
}
