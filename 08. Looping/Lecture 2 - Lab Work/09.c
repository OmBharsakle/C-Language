// 9. WAP To Calculate The Factorial Of Number Using Do While loop.

#include<stdio.h>

main()
{
	int i=1,n,fac=1;
	
	printf("Enter The Number : ");
	scanf("%d",&n);
	
	do
	{
		fac = fac * i;
		i++;
		
	}while(i<=n);	
	
	printf("Ans Is : %d ",fac);
	
}