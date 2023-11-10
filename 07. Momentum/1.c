//1. Write C program to input any character and check whether it is alphabet, digit or special character.
#include<stdio.h>
main()
{
	char c;
	
	printf("Enter Any Charater : ");
	scanf(" %c",&c);
	
	if('a'<=c && c>='z' || 'A'<=c && c>='Z')
	{
		printf("You Enter Alphabet : %c",c);
	}
	else if(c>=48 && 57>=c)
	{
		printf("You Enter Digit : %c",c);
	}
	else if(c>=33 && 47>=c || c>=58 && 64>=c)
	{
		printf("You Enter Special Charater : %c",c);
	}
}

/*

#include<stdio.h>

	int main()
	{
	int ch;
	
	printf("Enter any charcter you want : ");
	scanf("%c",&ch);
	
	if(ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
	{
		printf("You entered alphabet");
	}
	else if(ch >= '1' && ch <= '9')
	{
		printf("You enterd digit");
	}
	else
	{
		printf("You entered special character");
	}
	
	return 0;
}

*/