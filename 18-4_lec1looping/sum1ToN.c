#include<stdio.h>
int main(){
	
	int n,sum,i=1;
	
	printf("enter the value of : ");
	scanf("%d",&n);
	
	while(i<=n){
		
		sum = sum +i;
		i++;
	}
	
	printf("%d",sum);
	return 0;
}
