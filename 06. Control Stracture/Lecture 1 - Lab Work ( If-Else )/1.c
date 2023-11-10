#include<stdio.h>
main()
{
	int a,b;
	
	printf("Enter The Value Of A : ");
	scanf("%d",&a);
	printf("Enter The Value Of B : ");
	scanf("%d",&b);
	
	if(a<b)
	{
		printf("The Value Of A Is Min : %d",a);
	}
	else
	{
		printf("The Value Of B Is Min : %d",b);
	}
}
