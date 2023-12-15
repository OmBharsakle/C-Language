//5. WAP Check String Is Numeric Or Not.
#include<stdio.h>
#include<string.h>

main()
{
	char str[10];
	int i,len,check=0;
	
	printf("Enter Your String : ");
	gets(str);
	
	len = strlen(str);
	
	for(i=0; i<len; i++)
	{
		if(str[i] >= '0' && str[i] <= '9')
		{
			check = 1;
		}
	}
	
	if(check == 1)
	{
		printf("\nYou Entered Numeric String");
	}
	else
	{
		printf("\nYou Entered Only String.");
	}
}
