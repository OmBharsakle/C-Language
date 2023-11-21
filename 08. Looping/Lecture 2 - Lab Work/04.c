// 4. WAP To Print N to 1 Using Do While loop.

#include<stdio.h>

main()
{
	int i=1,n;
	
	printf("Enter The Number : ");
	scanf("%d",&n);
	
	do
	{
		printf("%d ",n);
		n--;
		
	}while(i<=n);	
}