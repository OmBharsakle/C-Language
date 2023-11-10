///5. WAP to Find max. from 3 using ternary operator.
#include<stdio.h>

main()

{
	int a,b,c;
	
	printf("Enter The Value Of A : ");
	scanf("%d",&a);
	printf("Enter The Value Of B : ");
	scanf("%d",&b);
	printf("Enter The Value Of C : ");
	scanf("%d",&c);
	
	(a>b)?(a>c)?printf("A Is Maximum"):printf("C Is Maximum"):(b>c)?printf("B Is Maximum"):printf("C Is Maximum");
	
}
