//Q.1 Write a Program to find the reverse of a 1D array using a Chain of Pointers.
#include<stdio.h>

int main()
{
 	int n,i;
 	
 	printf("Enter The Size Of An Array  : ");
 	scanf("%d",&n);
 	
 	int a[n];
 	
 	printf("\nEnter The Elements : \n");
 	
 	for(i=0; i<n; i++)
 	{
 		printf("Enter The a[%d] : ",i);
 		scanf("%d",&a[i]);
	}
	
	printf("\nThe Reverse Array Is : ");
	
	int *ptr = &a[n-1];
	
	for(i=n-1; i>=0; i--)
 	{
 		printf("%d ",*ptr);
 		ptr--;
	}

}
