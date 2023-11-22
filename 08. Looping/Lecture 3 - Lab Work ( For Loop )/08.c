// 8. WAP To Print Sum 1 to N Using For loop.

#include<stdio.h>

main()
{
	int i=1,n,sum=0;
	
	printf("Enter The Number : ");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++)
	{
		sum = sum + i;
	}	
	
	printf("Ans Is : %d ",sum);
}
