//Q.2 Write A Program To Check If A Given Number Is Divisible By Both 3 & 5 Or Not By Using UDF.
#include<stdio.h>
void divisible(int n)
{
	if(n%3==0 && n%5==0)
	{
		printf("You Enter Value Divisible By 3 & 5");
	}
	else if(n%3==0)
	{
		printf("You Enter Value Divisible By : 3");
	}
	else if(n%5==0)
	{
		printf("You Enter Value Divisible By : 5");
	}
}
main()
{
	int n;
	
	printf("Enter The One Number : ");
	scanf("%d",&n);
	
	divisible(n);
}

