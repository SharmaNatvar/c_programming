#include<stdio.h>
int main(){
	
	float c;
	float f;
	printf("enter the value of celsius : ");
	scanf("%f",&c);
	
	f = c*9/5+32;
	
	printf("Fahrenheit is : %f",f);
	
	return 0;
}
