//5. WAP To Convert Given String In Toggal Case.
#include<stdio.h>
main()
{
	char str[10];
	int i,s;
	
	printf("Enter the Your String : ");
	scanf("%s",&str);
	
	for(i=0; i<=str[i]; i++)
	{
		s++;
	}
	
	for(i=0; i<=s; i++)
	{
		if(str[0]>='a' && str[0]<='z')
		{
			str[0] = str[0] - 32;
		}
	}
	
	printf("\nYour String Is Toggal Case Convert : %s",str);
}
