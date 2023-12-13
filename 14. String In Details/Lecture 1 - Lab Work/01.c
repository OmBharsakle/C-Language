//1. WAP to convert given string in lowercase.
#include<stdio.h>
main()
{
	int type,i;
	
	printf("Enter The String Size : ");
	scanf("%d",&type);
	
	char low[type];
	
	printf("Enter Your Uppercase String : ");
	scanf("%s",&low);
	
	for(i=0; i<type; i++)
	{
		if(low[i]>=65 && 90>=low[i])
		{
			low[i]=low[i]+32;
			
		}
	}
	
	printf("%s",low);
}

