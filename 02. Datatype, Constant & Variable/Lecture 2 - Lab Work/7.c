#include<stdio.h>
main()
{
	int a,b,c;
	//Input A/B value
	printf("Enter The Value Of A : ");
	scanf("%d",&a);//5
	printf("Enter The Value Of B : ");
	scanf("%d",&b);//10
	
	//Logic 
	c=a;
	a=b;
	b=c;
	
	//print Value
	printf("A Value Of : %d\n",a);
	printf("B Value Of : %d",b);
	
}
