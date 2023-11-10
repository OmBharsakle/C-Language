
#include<stdio.h>
main()
{
	int a,b;
	//Input A/B value
	printf("Enter The Value Of A : ");
	scanf("%d",&a);//5
	printf("Enter The Value Of B : ");
	scanf("%d",&b);//10
	
	//Logic 
	a=a-b;//-5
	b=a+b;//-5+10=5
	a=b-a;//10
	
	//print Value
	printf("A Value Of : %d\n",a);
	printf("B Value Of : %d",b);
	
}
