#include<stdio.h>
int main(){
	int a;
	float salary;
	
	printf("enter the base salary : ");
	scanf("%d",&a);
	
	salary = a+(a*10/100)+(a*5/100)+(a*8/100);
	
	printf("salary %f",salary);
	
	return 0;
}
