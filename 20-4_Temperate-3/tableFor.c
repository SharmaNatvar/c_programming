#include<stdio.h>
int main(){
	int a,t;
	
	printf("enter your table value");
	scanf("%d",&a);
	
	for(t=1; t<=10; t++){
		printf("%d x %d = %d \n",a ,t, t*a );
	}
	return 0;
}
