//Q.1 Write A Program To Find The Cube Of A Given Number Using UDF.
#include<stdio.h>
void cube(int n)
{
	int cube;
	
	cube = n*n*n;
	
	printf("Your Number Cube Is : %d",cube);
}
main()
{
	int n;
	
	printf("Enter The One Number : ");
	scanf("%d",&n);
	
	cube(n);
}

