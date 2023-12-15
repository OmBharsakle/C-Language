//2. WAP compares two strings. - strcmp(name1,name2).
#include<stdio.h>
main()
{
	int i,ck=1;
	char str[20];
	char str1[20];
	
	printf("Enter Your First String : ");
	gets(str);
	
	printf("Enter Your Second String : ");
	gets(str1);
	
	int len = strlen(str);

	if(str[i]==str1[i])
	{
		printf("Yes Both Are String Same\n");
	}
	else
	{
		printf("Not Both Are String Same\n");
	}
}

