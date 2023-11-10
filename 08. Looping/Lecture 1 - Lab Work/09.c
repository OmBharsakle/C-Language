// 9. WAP To Calculate The Factorial Of Number Using While loop.

#include<stdio.h>

main()
{
	int i=1,n,fac;
	
	printf("Enter The Number : ");
	scanf("%d",&n);
	
	while(i<=n)
	{
		fac = fac * i;
		i++;
	}	
	
	printf("Ans Is : %d ",fac);
	
}
