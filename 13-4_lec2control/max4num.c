#include<stdio.h>
int main(){
	
	int a,b,c,d;
	
	printf("enter value of a : ");
	scanf("%d",&a);

	
	printf("enter value of b : ");
	scanf("%d",&b);	

	
	printf("enter value of c : ");
	scanf("%d",&c);

	
	printf("enter value of d : ");
	scanf("%d",&d);
	
	if(a>b){
		if(a>c){
			if(a>d){
				printf("your max. number is a: %d",a);
			}
			else{
				printf("your max. number is d: %d",d);
			}
		}
		else{
			if(c>d){
				printf("your max. number is c: %d",c);
			}
			else{
				printf("your max. number is d: %d",d);
			}
		}
	}
	else{
		if(b>c){
			if(b>d){
				printf("your max. number is b: %d",b);
			}
			else{
				printf("your max. number is d: %d",d);
			}
		}
		else{
			if(c>d){
				printf("your max. number is c: %d",c);
			}
			else{
				printf("your max. number is d: %d",d);
			}
		}
	}
	
	
	
	return 0;
}
