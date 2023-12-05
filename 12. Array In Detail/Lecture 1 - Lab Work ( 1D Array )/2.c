//2. WAP To Find The Sum Of A 1D Array.
#include<stdio.h>
main()
{
	int n,i,sum=0;
	
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
		sum = sum + a[i];
	}
	
	printf("The Sum Of Array = %d\n",sum);
	
}

