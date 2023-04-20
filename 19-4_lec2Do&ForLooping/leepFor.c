#include<stdio.h>
int main(){
	int l;
	
	for(l = 2000; l<=3000; l++){
		
		if( l % 4 == 0 && l % 100 != 0 || l%400 == 0){
			printf("%d \n",l);
		}
	}
		
	return 0;
}
