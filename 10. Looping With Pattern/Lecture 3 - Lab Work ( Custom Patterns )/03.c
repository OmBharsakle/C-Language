#include<stdio.h>
main()
{
	int i,j,k;

//  1 2 3 4 5 5 4 3 2 1
//  1 2 3 4     4 3 2 1
//  1 2 3         3 2 1
//  1 2             2 1
//  1                 1

	for(i=5; i>=1; i--)
	{
		//first line code
		
		for(j=1; j<=i; j++)
		{
			printf("%d ",j);
		}
		
		//scape
		
		for(k=i; k<5; k++)
		{
			printf("    ");
		}
		
		//next line code
		
		for(j=i; j>=1; j--)
		{
			printf("%d ",j);
		}
		
		printf("\n");
	}

}
