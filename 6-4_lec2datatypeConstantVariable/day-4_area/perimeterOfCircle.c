#include<stdio.h>
int main(){
	float pi = 3.14;
	float r;
	float sum;
	
	printf("enter the value of r : ");
	scanf("%f",&r);
	
	sum = 2*pi*r;
	
	printf("perimeter of circle is %f",sum);
	
	return 0;
}
