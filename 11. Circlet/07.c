#include<stdio.h>
main()
{
	int i,j,k;
	
	for(i=1; i<=5; i++)
	{
		for(j=i; j<=5; j++)
		{
			printf("%d",j);
		}
		
		printf("\n");
	}
}