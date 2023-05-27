#include<stdio.h>
int main(){
	
	int a ,sum;
	
	printf("enter the unit : ");
	scanf("%d",&a);
	
	if(a<=50){
		sum = (a*0.50);
		printf("%d",sum);
	}
	else if(a<=150){
		sum = (a*0.75)+25;
		printf("%d",sum);
	}
	else if(a<=250){
		sum = (a*1.20)+100;
		printf("%d",sum);
	}
	else{
		sum = (a*1.50)+220;
		printf("%d",sum);
	}

	
	
	return 0;
}
