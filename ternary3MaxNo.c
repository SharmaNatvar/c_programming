#include<stdio.h>

int main(){
	 
	 int a,b,c;
	 
	 printf("enter the vale of A :");
	 scanf("%d",&a);
	 
	 printf("enter the vale of B :");
	 scanf("%d",&b);
	 
	 printf("enter the vale of C :");
	 scanf("%d",&c);
	 
	 (a>b) ? 
	   	(a>c) ? printf("max value is A")	:  printf("max value is C")
	   	
	   : (b>c) ? printf("max value is B")	: printf("max value is C");
	 		
	 
	 return 0;
}
