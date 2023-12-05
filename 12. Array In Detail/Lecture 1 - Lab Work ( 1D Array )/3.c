//3. WAP To Find The Average Of The 1D Array.
#include<stdio.h>
main()
{
	int n,i;
	float sum=0;
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
	
	printf("The Sum Of Array = %.2f\n",sum/2);
	
}

