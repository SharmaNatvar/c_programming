#include<stdio.h>
int main(){
	
	int a,b,c,d,e;
	
	printf("enter the value of A");
	scanf("%d",&a);

	printf("enter the value of B");
	scanf("%d",&b);
	
	printf("enter the value of C");
	scanf("%d",&c);	
	
	printf("enter the value of D");
	scanf("%d",&d);
	
	printf("enter the value of E");
	scanf("%d",&e);
	
(a>b)?(a>c)?(a>d)?(a>e)?	printf("max value is A")	:	printf("max value is E")	:
			(d>e)?	printf("max value is D")	: printf("max value is E")	:
	  (c>d)?(c>e)?	printf("max value is C")	: printf("max value is E")		:
	  (d>e)?printf("max value is D")	: printf("max value is E")	:
(b>c)?(b>d)?(b>e)?printf("max value is B")		: printf("max value is E")	:
	  (d>e)?printf("max value is D")	: printf("max value is E")	:
(c>d)?(c>e)?printf("max value is C")	: printf("max value is E")	:
(d>e)?printf("max value is D")	: printf("max value is E");	

	
//	(a>b) ? (a>c)	? (a>d)		? (a>e) ? printf("max value is A")		: printf("max value is E")		: 
//					  (d>e) ? printf("max value is D") : printf("max value is E")	:
//			(c>d) ? (c>e) ? printf("max value is D") : printf("max value is E") :	
//			(d>e) ? printf("max value is D") : printf("max value is E")	:	
//	(b>c)? (b>d)? (b>e)?  printf("max value is B")	:  printf("max value is E")	 : 
//		   (d>e)? printf("max value is D") : printf("max value is E") 	:	
//	(c>d) ? (c>e) ? printf("max value is D") : printf("max value is E") ;



	
	return 0;
}
