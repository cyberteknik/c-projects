#include <stdio.h>
#include <stdlib.h>


int main()
{
	int a,b;
	int iþlem;
	printf("enter two numbers: ");
	scanf("&d &d",&a,&b);
	printf("yapmak istediðiniz iþlemi seciniiz: \n",iþlem);
	printf("1:toplama2:cýkarma3:carpma4:bolme");
	scanf("%d",iþlem)
	switch(iþlem) 
	{
		
	case 1:printf("%d",a+b);
	break;
	case 2:printf("%d",a-b);
	break;
	case 3:printf("%d",a*b);
	break;
	case 4printf("%d",a/b);
	break;
	default:printf("duzgun sayý gýr oc");
	}
	
	
	return 0;
}
