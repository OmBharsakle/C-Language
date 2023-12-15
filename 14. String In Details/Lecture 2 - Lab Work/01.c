//1. Write C Program To Count Frequency Of Each Character In A String.
#include<stdio.h>
main()
{
	int i,j,f=1;
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
				f++;
				str[j]=0;
			}
		}
		if(str[i]!=0)
		{
			printf("%c -> %d\n",str[i],f);
			f=1;
		}
	}
}

