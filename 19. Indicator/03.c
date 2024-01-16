//Q3. Wap To Find Maximum From Array Using Pointer.

#include<stdio.h>

int main()
{
	
	int n,i;
	
	printf("Enter The Size Of Array : ");
	scanf("%d",&n);
	
	int a[n];
	
	printf("\nEnter The Elements Of Array \n");
	
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
	
	int *max = &a[0]; 
	
	for(i=0; i<n; i++)
	{
		if(*max < *(max + i))
		{
			*max = *(max + i);	
		}	
	}
	
	printf("\n\nThe Array Is Max : %d",*max);
}
