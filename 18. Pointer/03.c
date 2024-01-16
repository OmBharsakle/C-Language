//Q.3 Write A Program To Find The Square Of Each Element Of A Given 1D Array Using A Pointer.

#include<stdio.h>

int main()
{
	int n,i,ans;
	
	printf("Enter The Size Of An Array : ");
	scanf("%d",&n);
	
	int a[n];
	
	printf("\nEnter The Elements Of An Array \n");
	
	for(i=0; i<n; i++)
	{
		printf("Enter The a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\nThe Array Is : ");
	
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
	
	int *ptr=&a[0];
	
	printf("\n\nThe Square Of All Elements Is : ");
	
	for(i=0; i<n; i++)
	{
		printf("%d ",(*ptr) * (*ptr));
		ptr++;
	}

}
