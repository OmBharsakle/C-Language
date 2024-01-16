//Q2.Write A Program To Find Cubes Of All Elements From A Given 2D Array Using Pointer With UDF.

#include<stdio.h>

void cube(int rows,int cols,int a[rows][cols])
{
	int i,j,ans;
	int *ptr= &a[0][0]; 

	printf("\n\nThe Cube Of An Array Is Below\n");
	
	for(i=0; i<rows; i++)
 	{
 		for(j=0; j<cols; j++)
		{
			printf("%d ",(*ptr) * (*ptr) * (*ptr));
			ptr++;	
		}
		printf("\n");	
	}
}

int main()
{
 	int r,c,i,j;
 	
 	printf("Enter The Number Rows : ");
 	scanf("%d",&r);
 	
 	printf("Enter The Number Cols : ");
 	scanf("%d",&c);
 	
 	int a[r][c];
 	
 	printf("\nEnter The Elements Of An Array \n");
 	
 	for(i=0; i<r; i++)
 	{
 		for(j=0; j<c; j++)
		{
			printf("Enter The a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]); 	
		}	
	}
	
	printf("\n\nThe Array Is Below: \n");
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	cube(r,c,a);
}
