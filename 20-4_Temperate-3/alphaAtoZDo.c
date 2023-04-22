#include<stdio.h>
char main(){
	char a= 'a';
	
//	printf("enter your value ");
//	scanf("%c",&a);
	
	do{
		printf("%c \t",a);
		a++;
	}while(a<= 'z');
	
	
//	if((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z')){
//		printf("your input is alphabet");
//	}
	
	return 0;
}
