#include<stdio.h>
#include<string.h>

// WAP to create login mechanism by entering right email & password

int main(){
	
	char email[20] , pass[20];
	
	printf("enter your email (example = abc@gmail.com) : "  );
	scanf("%s",email);

	printf("enter your pass (example = admin@123) : "  );
	scanf("%s",pass);	
	
	char r_email[] = "abc@gmail.com";
	char r_pass[] = "admin@123";	
	
	int y = strcmp(email,r_email);
	int z = strcmp(pass,r_pass);
	
	if(y==0 && z==0){
		printf("login done");
	}
	else{
		printf("login fail !");
	}
	
	return 0;
}

