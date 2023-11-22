// 5. WAP To Print Odd Number From 1 to N Using For Loop.

#include<stdio.h>

main()
{
	int i=1,n;
	
	printf("Enter The Number : ");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++)
	{
		if(i%2==1)
		{
			printf("%d ",i);
		}		
	} 
}
