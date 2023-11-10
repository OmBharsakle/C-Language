// 8. WAP To Print Sum 1 to N Using While loop.

#include<stdio.h>

main()
{
	int i=1,n,sum=0;
	
	printf("Enter The Number : ");
	scanf("%d",&n);
	
	while(i<=n)
	{
		sum = sum + i;
		i++;
	}	
	
	printf("Ans Is : %d ",sum);
}
