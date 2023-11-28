#include<stdio.h>
main()
{
	int i,j;
	
//	1
//	1 0
//	1 0 1
//	1 0 1 0
//	1 0 1 0 1
	
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d ",j%2);
		}
		printf("\n");
	}

}
