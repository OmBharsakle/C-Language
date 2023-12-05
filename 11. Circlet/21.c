#include<stdio.h>
main()
{
	int i,j,k=0;
	
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{
			
			k++;	
			if(k==12)
			{
			continue;	
			}
			printf("%d",k);
			
		}
		
		printf("\n");
	}
}