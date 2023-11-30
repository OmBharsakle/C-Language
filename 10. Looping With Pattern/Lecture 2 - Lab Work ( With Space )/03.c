#include<stdio.h>
main()
{
	int i,j,k;
	
//          1
//        2 2
//      3 3 3
//    4 4 4 4
//  5 5 5 5 5
	
	for(i=1; i<=5; i++)
	{
		for(k=i; k<5; k++)
		{
			printf("  ");
		}
		for(j=i; j>=1; j--)
		{
			printf("%d ",i);
		}
		printf("\n");
	}

}
