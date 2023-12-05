//5. Write A Program In C to Read N Number of Values In An Array And Display Them In Reverse Order
#include<stdio.h>
main()
{
	int n,i;
	
	printf("Enter The Size Of Array : ");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0; i<n; i++)
	{
		printf("Enter The Value a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=n-1; i>=0; i--)
	{
		printf("The Value a[%d] = %d\n",i,a[i]);
	}
	
	
}

