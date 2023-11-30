#include<stdio.h>
main()
{
	int i,j,k;
	
//	        1
//	      1 0
//	    1 0 1
//	  1 0 1 0
//	1 0 1 0 1
	
	for(i=1; i<=5; i++)
	{
		for(k=i; k<5; k++)
		{
			printf("  ");
		}
		for(j=1; j<=i; j++)
		{
			printf("%d ",j%2);
		}
		printf("\n");
	}

}
