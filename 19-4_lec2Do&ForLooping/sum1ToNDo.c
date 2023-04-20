#include<stdio.h>
int main(){
	
	int n,sum,i=1;
	
	printf("enter the value of : ");
	scanf("%d",&n);
	
	do{
		
		sum = sum +i;
		i++;
	}while(i<=n);
	
	printf("%d",sum);
	return 0;
}
