#include<stdio.h>

int main(){
	
	int a,b,c,d;
	
	printf("enter the value of A : ");
	scanf("%d",&a);
	
	printf("enter the value of B : ");
	scanf("%d",&b);
	
	printf("enter the value of C : ");
	scanf("%d",&c);
	
	printf("enter the value of D : ");
	scanf("%d",&d);
	
	
	(a>b) ?	(a>c) ?	(a>d) ?	printf("max value is A")	: printf("max value is D")	:	
			(c>d) ?	 printf("max value is C")	:	printf("max value is D")	:	
	(b>c) ?	(b>d) ?	printf("max value is B") 	:  printf("max value is D")		:	
			(c>d) ?	 printf("max value is C")	:	printf("max value is D");
	
	
	
	return 0;
}
