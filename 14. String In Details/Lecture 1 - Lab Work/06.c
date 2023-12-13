//6. WAP to convert given string in Title Case.

#include<stdio.h>

int main()
{
	char str[100];
	int i;
	
	printf("Enter the string you want : ");
	scanf("%s",&str);
	
	for(i=0; i<=100; i++)
	{
		if(str[0]>='a' && str[0]<='z')
		{
			str[0] = str[0] - 32;
		}
		else if(i != 0 && str[i]>='A' && str[i]<='Z')
		{
			str[i] = str[i] + 32;
		}
		
	}
	
	printf("\nThe string in Toggal Case is : %s",str);
	
 	return 0;
}
