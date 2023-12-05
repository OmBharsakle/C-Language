//1.WAP To Get & Print 1D Array Of N Elements.
#include<stdio.h>
main()
{
	int n,i;
	
	printf("Enter The Size Of Array : ");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0; i<=n; i++)
	{
		printf("Enter The Value a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<=n; i++)
	{
		printf("The Value a[%d] = %d\n",i,a[i]);
	}
	
	
}

