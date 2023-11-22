// 9. WAP To Calculate The Factorial Of Number Using For loop.

#include<stdio.h>

main()
{
	int i,n,fac=1;
	
	printf("Enter The Number : ");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++)
	{
		fac = fac * i;
	}	

	printf("Ans Is : %d ",fac);
	
}
