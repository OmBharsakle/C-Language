//3. Count No. of digits, alphabets & and special characters.
#include<stdio.h>
#include<string.h>

main()
{
	char str[30];
	int i,len,digit=0,alphabet=0,character=0;
	
	printf("Enter The Your String : ");
	gets(str);
	
	len = strlen(str);
	
	for(i=0; i<len; i++)
	{
		if(str[i] >= '1' && str[i] <= '9')
		{
			digit++;
		}
		else if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
		{
			alphabet++;
		}
		else
		{
			character++;
		}
	}
	
	printf("\nThe Number Of Digit Is : %d",digit);
	printf("\nThe Number Of Alphabet Is : %d",alphabet);
	printf("\nThe Number Of Special Character Is : %d",character);
}
