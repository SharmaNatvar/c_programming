#include<stdio.h>

int main(){
	float pi = 3.14;
	float r;
	float sum;
	
	printf("enter the value of r : ");
	scanf("%f",&r);
	
	sum = pi*r*r;
	
	printf("total area sum %f",sum);
	return 0;
}
