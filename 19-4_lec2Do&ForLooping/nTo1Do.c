#include<stdio.h>
int main(){
	int i=1,n;
	
	printf("enter the vale of n : ");
	scanf("%d",&n);
	
	do{
		printf("%d \n",n);
		n--;
	}while(n>=i);
	return 0;
}
