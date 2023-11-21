// 10. WAP To Print The Multiplication Table Of Number Using Do While loop.

#include<stdio.h>

main()
{
	int i=1,n,sum=1;
	
	printf("Enter The Number : ");
	scanf("%d",&n);
	
	do
	{
		sum = n * i;
		printf("%d * %d = %d \n",n,i,sum);
		i++;
		
	}while(i<=10);	
	
}