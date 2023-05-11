#include<stdio.h>

// 4. Write C program given character in Uppercase.


int main(){

	char a;
	
	printf("enter value : ");
	scanf("%c",&a);
	
	if(a>='A' && a<='Z'){
		a+=32;
		printf("%c",a);
	}
	else{
		printf("not valid %c", a);
	}
	return 0;
}
