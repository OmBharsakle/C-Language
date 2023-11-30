#include<stdio.h>
main()
{
	char i,j,k;
	
//  A B C D E
//    A B C D
//      A B C
//        A B
//          A
	 
	for(i='E'; i>='A'; i--)
	{
		for(k=i; k<'E'; k++)
		{
			printf("  ");
		}
		for(j='A'; j<=i; j++)
		{
			printf("%c ",j);
		}printf("\n");
	}	
}
