//1. Write a Program To Find The Average Of A Given 2D Array.
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
	
	int size = sizeof(a)/sizeof(a[0][0]);
	
	printf("\nEnter The All Elements \n");
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("Enter The Value Of a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n2D Array Is Below\n");
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d ",a[i][j]);
			sum = sum + a[i][j];
		}
		printf("\n");
	}
	
	printf("\nSum Of An Array : %.0f\n",sum);
	printf("Average Of An Array : %.2f",sum/size);
	
}

