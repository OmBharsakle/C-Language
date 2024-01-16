//Q4.Wap To Change Value By Passing Address Of Variable In UDF.

#include<stdio.h>

void changevalue(int *ptr)
{
	int n;
	
	printf("\n\nEnter Changing Value : ");
	scanf("%d",&n);
	
	*ptr = n;
}

int main()
{
	int a;
	
	printf("Enter The Value Of A : ");
	scanf("%d",&a);
	
	printf("\nValue Before Function Call : ");
	printf("\nA : %d",a);
	
	changevalue(&a);
	
	printf("\nValue After Function Call : ");
	printf("\nA : %d",a);
}
