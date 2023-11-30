#include<stdio.h>
main()
{
	int i,j,k;
	
//  - | - | -
//    - | - |
//      - | -
//        - |
//          -
	
	for(i=5; i>=1; i--)
	{
		for(k=i; k<5; k++)
		{
			printf("  ");
		}
		for(j=1; j<=i; j++)
		{
			(j%2==0)?printf("| "):printf("- ");
		}
		printf("\n");
	}

}
