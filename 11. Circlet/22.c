#include<stdio.h>
main()
{
	char i,j,k;
	
	for(i=65; i<=69; i++)
	{
		for(j=65; j<=i; j++)
		{
			printf("%c",i);
		}
		
		printf("\n");
	}
}