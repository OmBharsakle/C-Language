#include<stdio.h>
main()
{
	int i,j,k;
	
//	1 2 3 4 5
//	  2 3 4 5
//	    3 4 5
//	      4 5
//	        5
	
	for(i=1; i<=5; i++)
	{
		for(k=1; k<i; k++)
		{
			printf("  ");
		}
		for(j=i; j<=5; j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}

}
