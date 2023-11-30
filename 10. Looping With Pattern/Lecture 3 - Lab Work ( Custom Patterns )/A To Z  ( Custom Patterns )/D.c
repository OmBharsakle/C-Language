//D
#include<stdio.h>
main()
{
	int i,j,k;
	
	for(i=1; i<=7; i++)
	{
		for(j=1; j<=7; j++)
		{
			if(j==1 || j==3 && (i!=2 && i!=3 && i!=4 && i!=5 && i!=6 ) || j==4 && (i!=1 && i!=3 && i!=4 && i!=5 && i!=7 ) || j==5 && (i!=1 && i!=2 && i!=4 && i!=6 && i!=7 ) || j==6 && (i!=1 && i!=3  && i!=5 && i!=7) )
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

