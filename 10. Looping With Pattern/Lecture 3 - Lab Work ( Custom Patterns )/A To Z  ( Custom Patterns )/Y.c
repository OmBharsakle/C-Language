//Y
#include<stdio.h>
main()
{
	int i,j,k;
	
	for(i=1; i<=7; i++)
	{
		for(j=1; j<=5; j++)
		{
			if(j==3 && (i!=1 && i!=2) || i==1 && (j!=2 && j!=3 && j!=4) || i==2 && (j!=1 && j!=3 && j!=5) )
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



