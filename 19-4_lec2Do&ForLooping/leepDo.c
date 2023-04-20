#include<stdio.h>
int main(){
	int l = 2000 ;
	
	do{
		
		if( l % 4 == 0 && l % 100 != 0 || l%400 == 0){
			printf("%d \n",l);
		}
	l++;
	}while(l<=3000);	
	return 0;
}
