//3. Write C Program To Remove Spaces, Blanks From A String.
#include<stdio.h>
main()
{
	int i;
	char name[10];
	
	printf("Enter The String : ");
	gets(name);
	
	int length = strlen(name);
	
	for(i=0; i<length; i++)
	{
		if(name[i]==' ')
		{
			name[i]=name[i+1];
		}
	}
	
	puts(name);
}

