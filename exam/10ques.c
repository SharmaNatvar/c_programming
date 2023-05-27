#include<stdio.h>
int main(){
	
	int r,c,j,i;
	
	
	for(r=5; r>=1; r--){
		for(c=1 ; c<=r; c++){
			printf("%d",c);
		}
		printf("\n");
	}
	for(i=5; i>=1; i--){
		for(j=i ; j>=1; j--){
			printf("%d",j);
		}
		printf("\n");
	}
	
	
	return 0;
}
