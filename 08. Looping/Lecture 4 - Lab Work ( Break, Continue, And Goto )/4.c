//4. WAP To Find The Sum Of Any Nmbers Using The goto Statement.
#include<stdio.h>
main()
{
	int i=1,n,sum=0;
	
	printf("Enter Any Number : ");
	scanf("%d",&n);
	
	retry:
		
		sum = sum + i;
		i++;
			
	if(i<=n)
	{
		goto retry;
	}	
	
	printf("Sum Is : %d",sum);
}
