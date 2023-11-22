// 6. WAP To Print Even Number From N to 1 Using For loop.

#include<stdio.h>

main()
{
	int i=1,n;
	
	printf("Enter The Number : ");
	scanf("%d",&n);
	
	for(i=n; i>=1; i--)
	{
		if(i%2==0)
		{
			printf("%d ",i);
		}	
	} 	
}
