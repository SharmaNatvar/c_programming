#include<stdio.h>
int main(){
	
	int n ,sum=1 , i=1;
	
	printf("enter the value of n : ");
	scanf("%d",&n);
	
	
	do{
		
		sum = sum*i;
		
		i++;
	}while(i<=n);
	
	printf("%d",sum);
	
	return 0;
}
