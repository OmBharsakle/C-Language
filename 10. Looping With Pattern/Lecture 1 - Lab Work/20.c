#include<stdio.h>
main()
{
	int i,j;
	
//  -
//  | -
//  - | -
//  | - | -
//  - | - | -

	for(i=1; i<=5; i++)
	{
		for(j=i; j>=1; j--)
		{
			(j%2==0)?printf("| "):printf("- ");
		}
		printf("\n");
	}
}
