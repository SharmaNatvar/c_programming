#include<stdio.h>

int main(){
	
	int a,b;
	
	printf("enter your first number : ");
	scanf("%d",&a);
	printf("\n enter your second number : ");
	scanf("%d",&b);
	
	if(a<b){
		printf("your min. no. is : %d",a);
	}
	else{
		printf("your min. no. is : %d",b);
	}
	
	return 0;
}
