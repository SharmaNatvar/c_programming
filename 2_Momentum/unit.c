#include<stdio.h>

int main(){
	
	int unit,amt;
	
	printf("enter your unit : ");
	scanf("%d",&unit);
	
	if(unit<0){
		printf("your unit is invalid");
	}
	else if(unit<=50){
		amt = unit * 0.50;
	}
	else if(unit<=150){
		amt = ((unit-50)* 0.75)+25;
	}
	else if(unit<=250){
		amt = ((unit-150)*1.20)+100;
	}
	else if( unit>250){
		amt = ((unit-200)*1.50)+220;
	}
	else{
		printf("invalid input");
	}
	
	amt = amt+(amt*0.20);
	printf("your total amout is %d",amt);
	
	return 0;
}
