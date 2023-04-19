#include<stdio.h>
int main(){
	
	int n ,sum=1 , i=1;
	
	printf("enter the value of n : ");
	scanf("%d",&n);
	
	
	while(i<=n){
		
		sum = sum*i;
		
		i++;
	}
	
	printf("%d",sum);
	
	return 0;
}
