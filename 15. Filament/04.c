//4. Copy One String Into Another
#include<stdio.h>
#include<string.h>

main()
{
	char str[20],str1[20];
	int i,len;
	
	printf("Enter The Your String : ");
	gets(str);
	
	len = strlen(str);
	
	for(i=0; i<len; i++)
	{
		str1[i] = str[i];
	}
	
	printf("\nString No.1 : %s",str);
	printf("\n\nString No.2 : %s",str1);
}
