//Q.3 Write A Program To Find The Sum Of All 1D Array Elements By Passing An Array As An Argument Using UDF.
#include<stdio.h>
void sum(int n[])
{
	int sum=0,i;
	for(i=0; i<10; i++)
	{
		sum = sum + n[i];
	}
	
	printf("Your Array Sum Of : %d ",sum);
}
main()
{
	int n[10],i;
	
	for(i=0; i<10; i++)
	{
		printf("Enter The Value Of a[%d] : ",i);
		scanf("%d",&n[i]);
	}
	
	sum(n);
}

