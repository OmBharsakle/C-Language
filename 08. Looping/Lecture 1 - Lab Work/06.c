// 6. WAP To Print Even Number From N to 1 Using While loop.

#include<stdio.h>

main()
{
	int i=1,n;
	
	printf("Enter The Number : ");
	scanf("%d",&n);
	
	while(i<=n)
	{
		if(n%2==0)
		{
			printf("%d ",n);
		}
		n--;	
	}	
}
