//4. WAP to given string in reverse.
#include<stdio.h>
main()
{
	int i,s=0;
	char a[10];
	char rev[10];
	
	printf("Enter A String : ");
	scanf("%s",&a);
		
	for(i=0; i<=a[i]; i++)
	{
		s++;
	}
	
	printf("%d",s);
	
	for(i=0; i<=s; i++)
	{
		rev[i]= a[s];
		s--;
		
	}
	
	printf("%s",rev);
}

