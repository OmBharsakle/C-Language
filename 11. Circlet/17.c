#include<stdio.h>
main()
{
	int i,j,k;
	
	for(i=1; i<=5; i++)
	{
		for(k=i; k<5; k++)
		{
			printf(" ");
		}
		for(j=1; j<=i; j++)
		{
			printf("%d",j);
		}
		
		printf("\n");
	}
	for(i=2; i<=5; i++)
	{
		for(k=1; k<i; k++)
		{
			printf(" ");
		}
		for(j=i; j<=5; j++)
		{
			printf("%d",j);
		}
		
		printf("\n");
	}
}