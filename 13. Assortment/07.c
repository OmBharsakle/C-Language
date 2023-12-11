//7. Write a C Program To Find The Largest Number In Array.[2D]
#include<stdio.h>
main()
{
	int r,c,i,j,b=2;
	float sum=0;
	
	printf("Enter The Array's Row's Size : ");
	scanf("%d",&r);
	
	printf("Enter The Array's Col's Size : ");
	scanf("%d",&c);
	
	int a[r][c];
	
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
	
	int max=a[0][0];
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d ",a[i][j]);
			if(a[i][j]>max)
			{
				max = a[i][j];
			}
		}
	}
	
	printf("\n\nLargest Number In Array[2D] : %d\n",max);
	
	
}
