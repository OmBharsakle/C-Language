#include<stdio.h>
main()
{
	int i,j,k;
	printf("    *\n");
	for(i=1; i<4; i++)
	{
		for(k=i; k<=3; k++)
		{
			printf(" ");
		}
		for(j=1; j<=1; j++)
		{
			printf("* ");
		}
		for(k=1; k<i; k++)
		{
			printf("  ");
		}
		for(j=3; j<=3; j++)
		{
		 
			printf("* ");
		}
		printf("\n");
	}
}