//8. Wap To Printf Multiplication Table Of 1 to 10.
#include<stdio.h>
main()
{
	int i,j;
	
	for(i=1; i<=10; i++)
	{
		for(j=1; j<=10; j++)
		{
			printf("%d * %d = %d\n",i,j,j*i);
		}
		printf("\n");
	}
}
