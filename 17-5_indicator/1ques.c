#include<stdio.h>

//1. C program to swap two numbers using pointers using udf.

void swap(int *e , int *f ){
	int c;
	
	printf("a value %d \n", *e);
	printf("b value  %d \n \n", *f);
	
	c = *e;
	*e = *f;	
	*f = c;
	
	printf("a value %d \n", *e);
	printf("b value  %d", *f);
	
}

int main(){
	
	int a , b;
	
	printf("enter the number of a : ");
	scanf("%d",&a);
	
	printf("enter the number of b : ");
	scanf("%d",&b);
	
	swap(&a,&b);
	
	return 0;
}
