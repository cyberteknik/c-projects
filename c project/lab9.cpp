#include <stdio.h>
void toplama(int a,int b){
    printf("%d\n",a+b);
}
void bolme(int a,int b){
    printf("%d\n",a/b);
}
void carpma(int a,int b){
    printf("%d\n",a*b);
}
void cýkarma(int a,int b){
    printf("%d\n",a-b);
}
void us_alma(int a,int b){
	int i=0;
	double m=1;
	for(i=0;i<b;i++){	
		m*=a;	
	}
	
	printf("%f ",m);
	
}
int main(void){
    int a,b;
    int islem;
    
    printf("Enter the 1. number:");
    scanf("%d",&a);
    printf("Enter the 2.. number:");
    scanf("%d",&b);
    printf("Enter your choice");
    
    scanf("%d",&islem);
    
    switch (islem) {
      
        case 1:
          add(a,b);
            break;
        case 2:
            substraction(a,b);
            break;
        case 3:
         multiplication(a,b);
            break;
        case 4:
            division(a,b);
            break;
        case 5:
            power(a,b);
            
        default:
            printf("END\n");
            break;
    }
}
