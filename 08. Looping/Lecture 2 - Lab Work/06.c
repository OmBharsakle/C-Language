// 6. WAP To Print Even Number From N to 1 Using Do While loop.

#include<stdio.h>

main()
{
	int i=1,n;
	
	printf("Enter The Number : ");
	scanf("%d",&n);
	
	do
	{
		if(n%2==0)
		{
			printf("%d ",n);
		}
		n--;	
	}while(i<=n);	
}