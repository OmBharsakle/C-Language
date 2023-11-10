//1. WAP to Find Maximum From Given 2 no. Using Ternary Operator.
#include<stdio.h>

main()
{
	int a,b;
	
	printf("Enter The Value Of A : ");
	scanf("%d",&a);
	printf("Enter The Value Of B : ");
	scanf("%d",&b);
	
	(a>b)?printf("A Is Maximum"):printf("B Is Maximum");
}