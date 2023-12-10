//5. Write A Program To Print And FindTthe Sum Of All Boundary Elements From A Given 5x5 2D Array.
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
	
	printf("\n2D Array Output Is Below\n");
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			if(j==0 || j==4 || i==0 || i==4 )
			{
				printf("%d ",a[i][j]);
				sum = sum + a[i][j];
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	
	printf("\n\nThe Sum Of Boundary Elements Of An Array : %.0f\n",sum);
	
}

