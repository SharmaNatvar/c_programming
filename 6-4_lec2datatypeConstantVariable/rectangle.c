#include<stdio.h>
int main(){
	int w;
	int h;
	int sum;
	
	printf("enter the value of w :");
	scanf("%d",&w);
	printf("enter the value of h :");
	scanf("%d",&h);
	
	sum = w*h;
	
	printf("area of rectangle %d",sum);
	return 0;
}
