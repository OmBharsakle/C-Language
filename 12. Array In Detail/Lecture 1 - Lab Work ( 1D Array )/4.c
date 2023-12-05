// 4. WAP To Print The Multiplication Table Of Each Element Of The Array.
#include<stdio.h>
main()
{
	int n,i,j;
	
	int a[5] = {1,2,3,4,5};
	
	for(i=0; i<5; i++)
	{
		for(j=1; j<=10; j++)
		{
			printf("%d * %d = %d\n",a[i],j,a[i]*j);
		}
		printf("\n");
	}
}

