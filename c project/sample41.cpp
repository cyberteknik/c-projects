#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int method,a,b,c;
	float upp,low,n;
	printf("enter a,b and c:");
	scanf("%f %f %f",&a, &b, &c);
		float a,b,c,x1,x2,real,imaginary,discriminant;

	discriminant = (b*b)-(4*a*c);
	if(discriminant > 0)
	{
	x1 = (-b + sqrt(discriminant))/ 2*a;
	x2 = (-b - sqrt(discriminant))/2*a;
	printf("x1:%f",x1);
	printf("x2:%f",x2);
	}
	else if(discriminant==0)
	{
		x1 = x2 = (-b) / 2*a;
		printf("x1 = x2 = %2.f",x1);
	}
	else
	{
		real = -b/(2.0*a);
        imaginary = sqrt(-discriminant)/(2.0*a);
        printf("x1 = %.2f+%.2fi and x2 = %.2f-%.2fi", real, imaginary, real, imaginary);
    }
	
	
	printf("enter the number of approximation points:\n");
	scanf("%f",&n);
	printf("please specify  the integraion method.1 Lower, 2 Upper, 3Trapezoidal;\n");
	scanf("%d",&method);
	printf("enter the upper and lower limit of this integration:");
	scanf("%f %f",&upp,&low);
	deltax=(upp-low)/n
	printf("deltax=(%f-%f)/%f",upp,low,n);
	switch(method)
	{
		case 1:
			for(i=1;i<=n;i++)
			{
				
			}
			
			
			
			
			
			break;
		case 2:
			
			break;
		case 3:
			
			break;
	}
    



	
	
	
	system("pause");
	return 0;
}





		
	


