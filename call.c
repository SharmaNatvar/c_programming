#include<stdio.h>
int main(){
	
	int a;
	
	printf("enter the value for selecting language \n");
	printf("1. english \n");
	printf("2. hindi \n");
	printf("3. gujarati \n\n");
	
	printf("enter the value : ");
	scanf("%d",&a);
	
	switch(a){
		case 1: printf("we have chat support \n ");
				
				printf("are you interested \t than press '1'");	
				printf("\n are you not interested \t than press '2'");	
				
				printf("\n\n enter your interest : ");
				scanf("%d",&a);
				
				switch(a){
					default: printf("invalid number ");
					break;
					
					case 1: printf("Customer service");
						
							printf("\n balance enquiry press 1");
							printf("\n customer care number press 2");
							printf("\n near store press 3");
							
							printf("\n\n enter you number : ");
							scanf("%d",&a);
							
							switch(a){
								case 1: printf("your balance 0");
								break;
								
								case 2: printf("number = 11111");
								break;
								
								case 3: printf("nhi h bhai ");
								break;
								
								default: printf("invalid number");
								break;
							}
					break;
					
					case 2: printf("have a nice day");
					break;
					
					
				}		
		break;
		
		case 2: printf("we are coming soon  call care no. 199");
		break;
		
		case 3: printf("we are coming soon in gujarati  you call our customer care 121");
		break;
		
		default: printf("Invalid input");
		break;
	}
	
	return 0;
}
