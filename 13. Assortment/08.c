//8. Wap To Find The Reverse Array Without Using Another Array.
#include<stdio.h>
main()
{
	int r,c,i,j,b=2;
	float sum=0;
	
	printf("Enter The Array's Row's Size : ");
	scanf("%d",&r);
	
	int a[r];
	
	printf("\nEnter The All Elements \n");
	
	for(i=0; i<r; i++)
	{
		printf("Enter The Value Of a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n1D Array Is Below\n");
	
	for(i=0; i<r; i++)
	{
		printf("%d ",a[i]);
	}
	
	printf("\n\nReverse 1D Array Is Below\n");
	
	for(i=r-1; i>=0; i--)
	{
		printf("%d ",a[i]);
	}
	
}
