#include<stdio.h>

//Write C program to addition of two matrices.

int main(){
	
	int n,i,j,sum=0;
	
	printf("enter size :");
	scanf("%d",&n);
	
	int a[n][n];
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("enter element [%d] [%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0 ;i<n; i++){
		for(j=0;j<n;j++){
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	for(i=0; i<n; i++){
		sum= sum +a[i][n-i-1];
	}
	printf("%d \n", sum);
	
	
	
	
	return 0;
}
