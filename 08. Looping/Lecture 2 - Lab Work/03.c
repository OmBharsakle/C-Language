// 3. WAP To Print 1 to N Using Do While loop.

#include<stdio.h>

main()
{
	int i=1,n;
	
	printf("Enter The Number : ");
	scanf("%d",&n);
	
	do
	{
		printf("%d ",i);
		i++;
		
	}while(i<=n);	
}