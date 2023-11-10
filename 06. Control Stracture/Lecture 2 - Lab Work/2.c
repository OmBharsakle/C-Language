///2. WAP to Find min. from given 3 no. using nested if else.
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
	
	//a,b,c
	if(a<b)
	{
		//a,c
		if(a<c)
		{
			printf("A Is Minimum");
		}
		else
		{
			printf("C Is Minimum");
		}
	}
	else
	{
		if(b<c)
		{
			printf("B Is Minimum");
		}
		else
		{
			printf("c Is Minimum");
		}
	}
}
