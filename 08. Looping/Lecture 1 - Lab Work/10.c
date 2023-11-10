// 10. WAP To Print The Multiplication Table Of Number Using While loop.

#include<stdio.h>

main()
{
	int i=1,n,sum;
	
	printf("Enter The Number : ");
	scanf("%d",&n);
	
	while(i<=10)
	{
		sum = n * i;
		printf("%d * %d = %d \n",n,i,sum);
		i++;
	}	
	
}
