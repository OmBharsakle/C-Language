// 5. WAP To Print Odd Number From 1 to N Using While Loop.

#include<stdio.h>

main()
{
	int i=1,n;
	
	printf("Enter The Number : ");
	scanf("%d",&n);
	
	while(i<=n)
	{
		if(i%2==1)
		{
			printf("%d ",i);
		}
		i++;	
	}	
}
