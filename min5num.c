#include<stdio.h>
int main(){
	int a,b,c,d,e;
	
	printf("enter value of a: ");
	scanf("%d",&a);
	
	printf("enter value of b: ");
	scanf("%d",&b);
	
	printf("enter value of c: ");
	scanf("%d",&c);	
	
	printf("enter value of d: ");
	scanf("%d",&d);	
	
	printf("enter value of e: ");
	scanf("%d",&e);	
	
	
	if(a<b){
		if(a<c){
			if(a<d){
				if(a<e){
					printf("your min. number is a: %d",a);
				}
				else{
					printf("your min. number is e: %d",e);
				}
			}
			else{
				if(d<e){
					printf("your min. number is d: %d",d);
				}
				else{
					printf("your min. number is e: %d",e);
				}
			}
		}
		else{
			if(c<d){
				if(c<e){
					printf("your min. number is c: %d",c);
				}
				else{
					printf("your min. number is e: %d",e);
				}
			}
			else{
				if(d<e){
					printf("your min. number is d: %d",d);
				}
				else{
					printf("your min. number is e: %d",e);
				}
			}
		}
	}
	else{
		if(b<c){
			if(b<d){
				if(b<e){
					printf("your min. number is b: %d",b);
				}
				else{
					printf("your min. number is e: %d",e);
				}
			}
			else{
				if(d<e){
					printf("your min. number is d: %d",d);
				}
				else{
					printf("your min. number is e: %d",e);
				}
			}
		}
		else{
			if(c<d){
				if(c<e){
					printf("your min. number is c: %d",c);
				}
				else{
					printf("your min. number is e: %d",e);
				}
			}
			else{
				if(d<e){
					printf("your min. number is d: %d",d);
				}
				else{
					printf("your min. number is e: %d",e);
				}
			}
		}
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
		
	return 0;
}
