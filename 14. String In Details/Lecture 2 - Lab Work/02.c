//2. Write C Program To Check Whether A String Is Palindrome Or Not.
#include<stdio.h>
#include<string.h>

main()
{
	char str[20];
	int i,len,check=0;
	
	printf("Enter The Your String : ");
	gets(str);
	
	len = strlen(str);
	
	for(i=0; i<len; i++)
	{
		if(str[i] != str[len-i-1])
		{
			check = 1;
		}
	}
	
	if(check == 0)
	{
		printf("\nYou Entered String Are Palindrom");
	}
	else
	{
		printf("\nYou Entered String Are Not Palindrom");
	}
}
