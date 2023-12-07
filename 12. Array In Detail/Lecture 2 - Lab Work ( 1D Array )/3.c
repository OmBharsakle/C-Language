//3. Write a Program to find square of each Element From The Given Array.
#include<stdio.h>
main()
{
	int n,i;
	
	printf("Enter The Size Of Array : ");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0; i<n; i++)
	{
		printf("Enter The Value Of a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<n; i++)
	{
		printf("Square : %d -> %d \n",a[i],a[i]*a[i]);		 
	}
}

