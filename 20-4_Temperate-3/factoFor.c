#include<stdio.h>
int main(){
	int i,a,sum = 1;
	
	printf("enter the value of ");
	scanf("%d",&a);
	
	for(i=1; i<=a; i++){			
		sum= sum*i;
	}
	
	printf("%d",sum);
	
	return 0;
}
