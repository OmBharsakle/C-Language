//6. WAP to Find max. from 4 using ternary operator.
#include<stdio.h>

main()

{
	int a,b,c,d;
	
	printf("Enter The Value Of A : ");
	scanf("%d",&a);
	printf("Enter The Value Of B : ");
	scanf("%d",&b);
	printf("Enter The Value Of C : ");
	scanf("%d",&c);
	printf("Enter The Value Of D : ");
	scanf("%d",&d);
	
	(a>b)?(a>c)?(a>d)?printf("A Is Maximum"):printf("D Is Maximum"):printf("C Is Maximum"):(b>c)?(b>d)?printf("B Is Maximum"):printf("D Is Maximum"):(c>d)?printf("C Is Maximum"):printf("D Is Maximum");
	
}
