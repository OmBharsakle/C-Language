// 5. WAP To Print Odd Number From 1 to N Using Do While Loop.

#include<stdio.h>

main()
{
	int i=1,n;
	
	printf("Enter The Number : ");
	scanf("%d",&n);
	
	do
	{
		if(i%2==1)
		{
			printf("%d ",i);
		}
		i++;
			
	}while(i<=n);	
}