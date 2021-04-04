#include <stdio.h>
#include <stdlib.h>

void add(double x,double y){
	
	double c=0;
	c=x+y;
 printf("%f ",c);	
}

void subs(double q,double w){
	
	
	double p;
	p=q-w;
	printf("%f ",p);
	
	
}
void multi(double e,double r){
	
	double o;
	o =e*r;
	
	printf("%f ",o);
	

void division(double t, double u){
	
	double l;
	
	l=t/u;
	
	printf("%f ",l);
	
}

void pow(double k,double j){
	
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


printf("0= exit,1= add,2=subs,3=multi,4=div,5=power");		
		printf("enter opertor: ");
		scanf("%d",&oper);
		if (oper==0){
			
			return 0;
		}
		
			
	printf("enter two number ");
	scanf("%lf %lf",&x,&y);
  
	
switch (oper){
			
			
			case 1: add(x,y);
		break;
		case 2: subs(x,y);
		break;
		case 3: multi(x,y);
		break;
		case 4: division(x,y);
		break;
		case 5: pow(x,y);
		break;
			
		case 0: return 0;	
			
			
			
		}
	
}
		
		
	system("PAUSE");
	return 0;
	

