#include <stdio.h>
#include <stdlib.h>

void toplama(double a,double b){
	
	double c=0;
	c=a+b;
 printf("%f ",c);	
}

void cýkarma(double d,double e){
	
	
	double p;
	p=d-e;
	printf("%f ",p);
	
	
}
void carpma(double m,double n){
	
	double o;
	o =m*n;
	
	printf("%f ",o);
	

void bolme(double t, double u){
	
	double l;
	
	l=t/u;
	
	printf("%f ",l);
	
}

void us_alma(double k,double j){
	
	int i=0;
	double m=1;
	
	for(i=0;i<j;i++){
		
		m*=k;
		
		
	}
	
	printf("%f ",m);
	
}
int main (){
		int oper;
	double x,y;
	int i=0;

for (i=0;i<9999;i++){


printf("0= exit,1= toplama,2=cýkarma,3=carpma,4=bolma,5=us_alma");		
		printf("enter opertor: ");
		scanf("%d",&oper);
		if (oper==0){
			
			return 0;
		}
		
			
	printf("enter two number ");
	scanf("%lf %lf",&x,&y);
  
	
switch (oper){
			
			
			case 1: toplama(x,y);
		break;
		case 2: cýkarma(x,y);
		break;
		case 3: carpma(x,y);
		break;
		case 4: bolma(x,y);
		break;
		case 5: us_alma(x,y);
		break;
			
		case 0: return 0;	
			
			
			
		}
	
}
		
		
	system("PAUSE");
	return 0;
	

