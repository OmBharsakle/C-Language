// 10. WAP To Print The Multiplication Table Of Number Using For loop.

#include<stdio.h>

main()
{
	int i,n,sum=1;
	
	printf("Enter The Number : ");
	scanf("%d",&n);
	
	for(i=1; i<=10; i++)
	{
		sum = n * i;
		printf("%d * %d = %d \n",n,i,sum);
	}
	
}
