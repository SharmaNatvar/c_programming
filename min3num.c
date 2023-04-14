#include<stdio.h>
int main(){
	int a,b,c;
	
	printf("enter your first value ");
	scanf("%d",&a);

	printf("\n enter your 2nd value ");
	scanf("%d",&b);
	
	printf("\n enter your 3rd value ");
	scanf("%d",&c);	
	
	if(a<b){
		if(a<c){
			printf("min. number is a: %d ",a);
		}
		else{
			printf("min. number is c: %d ",c);
		}
	}
	else{
		if(b<c){
			printf("min.number is b : %d",b);
		}
		else{
			printf("min.number is c : %d",c);
		}
	}
	
	
	return 0;
}
