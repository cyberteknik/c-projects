/*
*To achieve a particular function,To integrate f(x) = x; which is rom low to up
*sum=( (up-low)/n)*(f(x0)+f(x1)+...+f(x(n-1)) ) 
or sum=( (up-low)/n)*(f(x1)+f(x2)+...+f(x(n)) )
*Method:Fixed step quadrature;
*Date:			2010-11-28
*modification:	2010-12-31 usage modification : else -> switch
*Version:		0.1.6
*Author:		wdliming
*description:	Using modular programming method
*/
#include <stdio.h>
#include <math.h>

double Integrate(double low,double up,	unsigned long int n,int F_Ch);
//double Func_Chioce(double x, int F_Ch);
void Start();

void Start()
{	
	printf("				Mini Integrate\n");
	printf("				   LiMing\n");
	printf("				version 0.1.5\n");
	printf("Funcion 1:	f(x)=x;\n");
	printf("Funcion 2:	f(x)=x*x;\n");
	printf("Funcion 3:	f(x)=exp(x);\n\n");
	printf("Please input a number to select a funcion to integrate:\n");
}

double Integrate(double low,double up, unsigned long int N,int F_Ch)
{
	double temp=0;
	double sum=0;
	double temp_1=0;
	if( ((low>-100)&&(low<100)) && ( (up>-100)&&(up<100)) && (low != up) )
	{
	/*First,low and up is between -100 and 100;Second,low != up;Third,up>low*/
		printf("low=%lf,up=%lf.\n",low,up);
		
		if( (N>0)&&(N<429467295) )
		{
			printf("N=%ld\n",N);
				temp=(up-low)/N;
			printf("temp=(up-low)/N=%lf\n",temp);
			unsigned long int i;//counter i;
			switch(F_Ch)
			{
				case 1:
					for(i=1;i<=N;i++)
					{
						temp_1=low+temp*i;
						sum = sum + temp_1;//This statement is very important!
					}sum *= temp;					 
					break;
					
				case 2:
					for(i=1;i<=N;i++)
					{
						temp_1=low+temp*i;
						sum = sum + pow(temp_1,2);//This statement is very important!
					}sum *= temp;
					break;
					
				case 3:
					for(i=1;i<=N;i++)
					{
						temp_1=low+temp*i;
						sum = sum + exp(temp_1);//This statement is very important!
					}sum *= temp;
					break;
			}
			/*if(F_Ch==1)
			{
				for(i=1;i<=N;i++)
				{
					temp_1=low+temp*i;
					sum = sum + temp_1;//This statement is very important!
				}
				sum *= temp;
			}
			else if(F_Ch==2)
			{
				for(i=1;i<=N;i++)
				{
					temp_1=low+temp*i;
					sum = sum + pow(temp_1,2);//This statement is very important!
				}
				sum *= temp;
			}
			else if(F_Ch==3)
			{
				for(i=1;i<=N;i++)
				{
					temp_1=low+temp*i;
					sum = sum + exp(temp_1);//This statement is very important!
				}
				sum *= temp;
			}*/
			//printf("Successful!The result of integral is:%lf\n\n",sum);
		}	
		else if(N<0)
		{
			printf("Failed!The number you input is illegal!\n");
			printf("continue!\n");
		}
		else 
		{
			printf("Failed!The number you input is too big!\n");
			printf("continue!\n");
		}
	}
	else 
	if( low == up )
	{
		printf("Successful!sum=%lf\n",sum=0);
		printf("continue!Input the two Real Number a(low) and b(up) again: low,up.\n\n");			
	}
	else
	{
		printf("Failed!The number(s) you input is(are) too big!\n");
		printf("continue input the two Real Number a(low) and b(up) again: low,up.\n\n");
	}
	return sum;
}

int main() 
{
	
	double low=0;
	double up=0;	
	double sum=0;
	int F_Ch=0;
	Start();
	while(scanf("%d",&F_Ch))
	{
		if(F_Ch>0&&F_Ch<4)
		{
			printf("Selece Function %d;\n\n",F_Ch);
			
			printf("Input the two Real Number a(low) and b(up) to \ndefine the area that you want to integral: low,up.\n");
			printf("for example:0,2\n\n");
			
			scanf("%lf,%lf",&low,&up);
			printf("Input a number 'N':");
			unsigned long int N;
			scanf("%ld",&N);
			sum=Integrate(low,up,N,F_Ch);
			printf("Successful!The result of integral is:%lf\n\n",sum);
		}
		else
		{
			printf("error!\n");
		}
	}
	return 0;
}
