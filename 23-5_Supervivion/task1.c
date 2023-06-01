#include<stdio.h>

int  main (){
	FILE *p;
	char ch[50];
	
	p=Fopen("demo.txt","w");
	
	if(p==null){
		printf("Error");
	}
	else{
		printf("enter the text :");
		gets(ch);
		
		Fputs(ch,p);
		
		Fclose(p);
	}
	
	return 0;
}