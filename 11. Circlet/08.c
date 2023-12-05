#include<stdio.h>
main()
{
	int i,j,k;
	
	for(i=45; i<=49; i++)
	{
		for(j=45; j<=i; j++)
		{
			printf("%d",j);
		}
		
		printf("\n");
	}
}