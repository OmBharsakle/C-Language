//4. Write a program to get two array and create addition of array position wise.
#include<stdio.h>
main()
{
	int n,i,sum=0;
	int b[n];
	
	printf("Enter The Size Of Array : ");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0; i<n; i++)
	{
		printf("Enter The Value a[%d] = ",i);
		scanf("%d",&a[i]);  
	}
	
	printf("\n");
	
	for(i=0; i<n; i++)
	{
		printf("Enter The Value a[%d] = ",i);
		scanf("%d",&b[i]);  
	}
	
	printf("\n");
	
	for(i=0; i<n; i++)
	{
		sum = b[i] + a[i];
		printf("The Sum Of Array a[%d] + b[%d]= %d\n",i,i,sum);
	}
		
}
