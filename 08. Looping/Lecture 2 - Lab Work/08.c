// 8. WAP To Print Sum 1 to N Using Do While loop.

#include<stdio.h>

main()
{
	int i=1,n,sum=0;
	
	printf("Enter The Number : ");
	scanf("%d",&n);
	
	do
	{
		sum = sum + i;
		i++;
		
	}while(i<=n);	
	
	printf("Ans Is : %d ",sum);
}