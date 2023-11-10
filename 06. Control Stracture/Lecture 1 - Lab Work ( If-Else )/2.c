#include<stdio.h>
main()
{
	int n;
	printf("Enter The Number : ");
	scanf("%d",&n);
	
	if(n>0)
	{
		printf("This Number Is Positive : %d",n);
	}
	else
	{
		if(n==0)
		{
			printf("This Number Is Neutral : %d",n);
		}
		else
		{
			printf("This Number Is Nagative : %d",n);
		}
	}
}
