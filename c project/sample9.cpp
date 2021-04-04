#include <stdio.h>
#include <stdlib.h>
int recursive(int a);
int main()
{
	int a;
	printf("enter a integer value: ");
	scanf("%d",&a);
	printf("%d",recursive(a));
	
	return 0;
}
int recursive(int a)
{
	if(a==0)
	return 0;
	
	return a + recursive(a-1);
}
