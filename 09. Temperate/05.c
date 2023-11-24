//5. Write C Program To Calculate Factorial Of a Number.
#include<stdio.h>
main()
{
	int n,sum=1,i;
	
	printf("Enter The Factorial Number : ");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++)
	{
		sum = sum*i;
	}
	
	printf("%d",sum);
	
}
