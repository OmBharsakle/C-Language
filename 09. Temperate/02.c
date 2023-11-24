//2. Write C Program To Print Multiplication Table Of Any Number.
#include<stdio.h>
main()
{
	int n,sum=1,i;
	
	printf("Enter The Table Number : ");
	scanf("%d",&n);
	
	for(i=1; i<=10; i++)
	{
		sum = n*i;
		
		printf("%d * %d = %d\n",n,i,sum);
	}
 
	
}
