#include<stdio.h>
int main(){
	
	int r,c;
	
	for(r=2; r<=6; r++){
		for(c=2; c<=r; c++){
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
