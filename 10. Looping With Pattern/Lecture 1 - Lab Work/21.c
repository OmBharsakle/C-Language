#include<stdio.h>
main()
{
	char i,j;
	 
	
//	A
//	A B
//	A B C
//	A B C D
//	A B C D E
	
	for(i='A'; i<='E'; i++)
	{
		for(j='A'; j<=i; j++)
		{
			printf("%c ",j);
		}
		printf("\n");
	}

}
