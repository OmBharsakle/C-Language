#include<stdio.h>
main()
{
	int a,b;
 
	printf("Enter The Value Of A : ");
	scanf("%d",&a);
	printf("Enter The Value Of B : ");
	scanf("%d",&b);
	
	a=a-b; 
	b=a+b; 
	a=b-a;

	printf("A Value Of : %d\n",a);
	printf("B Value Of : %d",b);
	
}
