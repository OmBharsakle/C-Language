//7. WAP to Find max. from 5 using ternary operator.
#include<stdio.h>

main()

{
	int a,b,c,d,e;
	
	printf("Enter The Value Of A : ");
	scanf("%d",&a);
	printf("Enter The Value Of B : ");
	scanf("%d",&b);
	printf("Enter The Value Of C : ");
	scanf("%d",&c);
	printf("Enter The Value Of D : ");
	scanf("%d",&d);
	printf("Enter The Value Of E : ");
	scanf("%d",&e);
	
	(a>b)?(a>c)?(a>d)?(a>e)?printf("A is max"):printf("E is max"):printf("D is max"):printf("C is max"):(b>c)?(b>d)?(b>e)?printf("B is max"):printf("E is max"):printf("D is max"):(c>d)?(c>e)?printf("C is max"):printf("E is max"):(d>e)?printf("D is max"):printf("E is max");
}
