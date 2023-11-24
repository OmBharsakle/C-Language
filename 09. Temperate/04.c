//4. Write C Program To Find Sum Of First And last Digit Of a Number.
#include<stdio.h>
main()
{
	int n;

	printf("Enter The Value Count Number : ");
	scanf("%d",&n);
	
	int ld = n%10;

	for(n; n>9;)
	{
		n = n/10;
	}
	 printf("%d + %d = %d ",n,ld,n+ld);
}
