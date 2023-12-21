#include<stdio.h>

main()
{
	char email[100]="sarika@gmail.com";
	char email1[100];
	char pass[100]="sarika12345";
	char pass1[100];
	int n,i;
	
	printf("Enter Your email = ");
	gets(email1);
	printf("Enter you psw = ");
	gets(pass1);
	
	
	if(strcmp(email,email1)==0)
	{
		if(strcmp(pass,pass1)==0)
		{
			printf("You Are login Success !");
		}
		else
		{
			printf("plz Enter Right Password");
		}
	}
	else
	{
		printf("Plz Enter Right Email");
	}		
}