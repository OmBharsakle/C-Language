// 4. WAP To Print N to 1 Using While loop.

#include<stdio.h>

main()
{
	int i=1,n;
	
	printf("Enter The Number : ");
	scanf("%d",&n);
	
	while(i<=n)
	{
		printf("%d ",n);
		n--;
	}	
}
