#include<stdio.h>
int main(){
	
	int a;
	
	printf("enter your no.");
	scanf("%d",&a);
	
	if(a>0){
		printf("given no. is not neutral");
	}
	else if(a<0){
		printf("given no. is not neutral");
	}
	else{
		printf("given no. is neutral");
	}
	return 0;
}
