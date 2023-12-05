#include<stdio.h>
main()
{
	int i,j,k;
	
	for(i=5; i>=1; i--)
	{
		for(j=5; j>=i; j--)
		{
			printf("%d",j);
		}
		
		printf("\n");
	}
}