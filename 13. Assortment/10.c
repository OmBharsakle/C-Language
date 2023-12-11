//10. Write a Program To Find The Sum Of Anti Diagonal Elements From A Given 2D Array.
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
	
	printf("\n2D Array Is Below\n");
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\nAnti Diagonal Element's In 2D Array\n");
	
	for(i=0; i<r; i++)
	{
		printf("%d ",a[i][b]);
		sum = sum + a[i][b];
		b--;
	}
	
	printf("\n\nSum Of An Anti Diagonal Element's : %.0f\n",sum);
	printf("Average Of An Anti Diagonal Element's : %.2f\n\n",sum/size);
	
}

