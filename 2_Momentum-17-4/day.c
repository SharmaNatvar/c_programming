#include<stdio.h>
int main(){
	char l;
	
	printf("enter your capital letter : ");
	scanf("%c",&l);
	
	switch(l){
		case 'm',
		case 'M': printf("your day is monday");
		break;
		
		case 'T': printf("your day is tuesday");
		break;
		
		case 'W': printf("your day is wednesday");
		break;
		
		case 'TH': printf("your day is Thrusday");
		break;
		
		case 'F': printf("your day is Friday");
		break;
		
		case 'S': printf("your day is Saturday");
		break;
		
		case 'SU': printf("your day is Sunday");
		break;
		
		default : printf("invalid letter ");
		break;
	}
	
	return 0;
}
