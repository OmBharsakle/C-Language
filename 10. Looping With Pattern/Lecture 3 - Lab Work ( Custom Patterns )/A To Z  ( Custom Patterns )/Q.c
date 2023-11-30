//Q
#include<stdio.h>
main()
{
	int i,j,k;
	
	for(i=1; i<=7; i++)
	{
		for(j=1; j<=6; j++)
		{
			if(j==1 && (i!=1 && i!=7) || j==5 && (i!=1 && i!=7) || i==1 && (j!=1 && j!=5 && j!=6) || i==7 && (j!=1 && j!=5) || i==5 && (j!=2 && j!=4 && j!=6)  )
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


