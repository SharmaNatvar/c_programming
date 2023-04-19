#include<stdio.h>
int main(){
	float p;
	float r;
	float t;
	float sum;
	
	printf("enter the value of p(principal) : ");
	scanf("%f",&p);
	
	printf("enter the value of r(rate of interest) : ");
	scanf("%f",&r);
	
	printf("enter the value of t(time) : ");
	scanf("%f",&t);
	
	sum = p*r*t;
	
	printf("simple interest is %f",sum);
	
	return 0;
}
