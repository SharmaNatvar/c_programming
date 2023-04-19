#include<stdio.h>
int main(){
	int a;
	int b;

	
	printf("enter the value a: ");
	scanf("%d",&a);
	printf("enter the value b: ");
	scanf("%d",&b);
	
	a+=b;
	b= a-b;
	a -=b;
	printf("b %d \n",b);
	printf("a %d",a);
	
	return 0;
}
