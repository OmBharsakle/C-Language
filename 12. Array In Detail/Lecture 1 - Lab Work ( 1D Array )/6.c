//6. Write A program In C To Copy The Elements Of One Array Into Another Array.
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
	
	printf("Original Array\n");
	
	for(i=0; i<=n; i++)
	{
		printf("The Value a[%d] = %d\n",i,a[i]);
	}
	
	int b[n];
	int c[n];
	
	for(i=0; i<=n; i++)
	{
		b[i] = a[i];
	}
	
	printf("Second Array\n");
	
	for(i=0; i<=n; i++)
	{
		printf("The Value b[%d] = %d\n",i,b[i]);
	}
	
}

