#include<stdio.h>
int main(){
	
	int r,c;
	
	for(r=1; r<=5; r++){
		for(c=1; c<=r; c++){
			if(c%2==0){
				printf("0");
			}
			else{
				printf("1");
			}
		}
		printf("\n");
	}
	
	
	return 0;
}
