//2. WAP to convert given string in uppercase.
#include<stdio.h>
main()
{
	int type,i;
	
	
	printf("Enter The String Size : ");
	scanf("%d",&type);
	
	char upp[type];
	
	printf("Enter Your Lowercase String : ");
	scanf("%s",&upp);
	
	for(i=0; i<type; i++)
	{
		if(upp[i]>=97 && 122>=upp[i])
		{
			upp[i]=upp[i]-32;
			
		}
	}
	
	printf("%s",upp);
}

