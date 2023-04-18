#include<stdio.h>
int main(){
	
	char a;
	
	printf("enter your value ");
	scanf("%c",&a);
	
	if((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z')){
		printf("your input is alphabet");
	}
	
	else if(a>= '1' && a<= '9'){
		printf("your input is number");
	}
	else{
		printf("your input is Special Alphabet");
	}
	
	return 0;
}
