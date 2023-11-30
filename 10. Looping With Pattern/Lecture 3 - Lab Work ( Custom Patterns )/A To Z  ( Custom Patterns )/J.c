//J
#include<stdio.h>
main()
{
	int i,j,k;
	
	for(i=1; i<=7; i++)
	{
		for(j=1; j<=5; j++)
		{
			if(j==3 || i==1 || i==7 && (j!=1 && j!=4 && j!=5) || i==6 && (j!=2 && j!=4 && j!=5))
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



