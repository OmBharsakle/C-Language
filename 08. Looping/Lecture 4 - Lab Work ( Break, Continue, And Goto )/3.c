//3. WAP To Find The Any Number Factorial Without A Loop. ( Using A goto Statement ).
#include<stdio.h>
main()
{
	int i=1,n,fac;
	
	printf("Enter Any Number : ");
	scanf("%d",&n);
	
	retry:
		
		fac = fac * i;
		i++;
		
	if(i<=n)
	{
		goto retry;
	}	
	
	printf("Fac Is : %d",fac);
}
