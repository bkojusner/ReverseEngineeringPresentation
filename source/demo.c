#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{
	if(argc != 2)
	{
		exit(0);
	}
	
	char pass[16];
	int auth = 0;
	
	strcpy(pass, argv[1]); //Vulnerable. Strcpy 
	
	if(strcmp(pass, "passkey") == 0)
	{
		auth = 1;
	}
	else
	{
		printf("Wrong Password.\n"); //Vulnerable. Application does not exit.
	}
	
	if(auth == 1)
	{
		printf("Secret!\n");
	}
	
	return 0;
}
