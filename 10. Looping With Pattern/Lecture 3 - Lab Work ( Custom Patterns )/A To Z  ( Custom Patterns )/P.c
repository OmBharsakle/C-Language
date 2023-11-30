//P
#include<stdio.h>
main()
{
	int i,j,k;
	
	for(i=1; i<=7; i++)
	{
		for(j=1; j<=5; j++)
		{
			if(j==1 || i==1 && (j!=5) || i==4 && (j!=5) || i==2 && (j!=2 && j!=3 && j!=4) || i==3 && (j!=2 && j!=3 && j!=4))
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
}


