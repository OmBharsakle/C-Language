//4. WAP to given string in reverse.
#include<stdio.h>
main()
{
	int i;
	char a[10];
	
	printf("Enter A String : ");
	scanf("%s",&a);
	
	int len = strlen(a);
		
	for(i=len-1; i>=0; i--)
	{
		printf("%c",a[i]);
	}
}
