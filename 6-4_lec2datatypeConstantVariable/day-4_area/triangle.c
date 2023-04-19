#include<stdio.h>
int main(){
//	float a = 1/2;
	int b;
	int h;
	float sum;
	
	printf("enter the value of b : ");
	scanf("%d",&b);
	
	printf("enter the value of h : ");
	scanf("%d",&h);
	
	sum = 0.5*b*h;
	
	printf("area of triangle %f",sum);
	
	return 0;
}
