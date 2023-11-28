#include<stdio.h>
main()
{
	int i,j;
	char c = 'A';
	
//	A
//	B C
//	D E F
//	G H I J
//	K L M N O
	
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%c ",c);
			c++;
		}
		printf("\n");
		
	}

}
