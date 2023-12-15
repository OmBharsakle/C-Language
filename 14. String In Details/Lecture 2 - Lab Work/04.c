//4. Write C Program To Remove All Repeated Characters In A String.
#include<stdio.h>
main()
{
	int i,j;
	char str[10];
	
	printf("Enter Your String : ");
	gets(str);
	
	int length = strlen(str);
	
	for(i=0; i<length; i++)
	{
		for(j=i+1; j<length; j++)
		{
			if(str[i]==str[j])
			{
				str[j]=0;
			}
		}
		if(str[i]!=0)
		{
			printf("%c",str[i]);
		}
	}
}
