#include<stdio.h>
int main(){
	
	int a , b, c, d;
	
	printf("enter your first value : ");
	scanf("%d",&a);

	printf("enter your second value : ");
	scanf("%d",&b);
	
	printf("enter your 3rd value : ");
	scanf("%d",&c);
	
	printf("enter your 4th value : ");
	scanf("%d",&d);
			
	if(a>b){
		if(a>c){
			if(a>d){
				printf("max value is a %d", a);
			}
			else{
				printf("max value is d %d", d);
			}
		}
		else{
			if(c>d){
				printf("max value is 3rd %d",c);
			}
			else{
				printf("max value is 4th %d",d);
			}
		}
	}
	else{
		if(b>c){
			if(b>d){
				printf("max value is second %d",b);
			}
			else{
				printf("max value is 4th %d",d);	
			}
		}
		else{
			if(c>d){
				printf("max value is 3rd %d",c);
			}
			else{
				printf("max value is 4th %d",d);
			}
		}
	}
	
	return 0;
}
