//2 Write a Program to perform the addition operation of two 2D arrays & store it in another array. Keep in mind that both array sizes must be the same.
#include<stdio.h>
main()
{
	int r,c,i,j;
	float sum=0;
	
	printf("Enter The Array's Row's Size : ");
	scanf("%d",&r);
	
	printf("Enter The Array's Col's Size : ");
	scanf("%d",&c);
	
	int a[r][c];
	int b[r][c];
	int s[r][c];
	
	
	int size = sizeof(a)/sizeof(a[0][0]);
	
	printf("\nEnter The Elements Of First Array \n");
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("Enter The Value Of a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\nEnter The Elements Of Second Array \n");
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("Enter The Value Of a[%d][%d] : ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("\nFirst 2D Array Is Below\n");
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d ",a[i][j]);
			sum = sum + a[i][j];
		}
		printf("\n");
	}
	
	printf("\nSecond 2D Array Is Below\n");
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d ",b[i][j]);
			sum = sum + a[i][j];
		}
		printf("\n");
	}
	
	printf("\n2D Array Sum Is Below\n");
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			sum = a[i][j] + b[i][j];
			printf("%.0f",sum);
		}
		printf("\n");
	}
	
}

