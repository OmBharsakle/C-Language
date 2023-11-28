#include<stdio.h>
main()
{
	int i,j;
	
//	1 1 1 1 1
//	2 2 2 2
//	3 3 3
//	4 4
//	5
	
	for(i=1; i<=5; i++)
	{
		for(j=i; j<=5; j++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}

}
