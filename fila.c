#include<stdio.h>
#include<string.h>

void main()
{
	char name[1000];
	int i,n,count=0;
	
	printf("Enter of Character =");
	gets(name);
	n=strlen(name);
	
//	printf("Reverse String =%s",string(name));
	
	for(i=0;i<n;i++)
	{
		if(name[i]==name[n-i-1])
		count++;
	}
	if(count==i)
	{
		printf("String is Palindrom");
	}
	else
	{
		printf("String is Not Palindrom");
	}
}