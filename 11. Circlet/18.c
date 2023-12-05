#include<stdio.h>
main()
{
	int i,j,k;
	
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d",j);
		}
		for(k=i; k<5; k++)
		{
			printf("  ");
		}
		for(j=i; j>=1; j--)
		{
			printf("%d",j);
		}
		
		printf("\n");
	}
}