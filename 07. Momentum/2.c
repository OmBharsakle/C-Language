//2. Write C program to check a number is even or odd using ternary operator.
#include<stdio.h>
main()
{
	int n;
	
	printf("Enter The Value Of Number : ");
	scanf("%d",&n);
	
	(n%2==0)?printf("This Value Of Even"):printf("This Value Of Odd");
}