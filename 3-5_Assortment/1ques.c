#include<stdio.h>

//Write C program to print all negative elements in an array.

int main(){
	
	int size;
	
	printf("enter size of array : ");
	scanf("%d",&size);
	
	int a[size],i;
	
	
	
	for(i=0; i<size; i++){
		printf("enter value [%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<=size; i++){
		if(a[i]<0){
			printf("%d \t",a[i]);
		}
		
	}
	
	return 0;
}
