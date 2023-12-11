//9. Wap to find sum of diagonal element in 2d array.
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
		}
		printf("\n");
	}
	
	printf("\nDiagonal Element's In 2D Array\n");
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			if(i==j)
			{
				printf("%d ",a[i][j]);
				sum = sum + a[i][j];
			}
		}
	}
	
	printf("\n\nSum Of An Diagonal Element's : %.0f\n",sum);
	
}

