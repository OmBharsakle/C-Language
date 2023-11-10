//3. Write C program to find out max from 4 numbers using nested if.
#include<stdio.h>

main()
{
	int a,b,c,d;
	
	printf("Enter The Number  Of A : ");
	scanf("%d",&a);
	printf("Enter The Number  Of B : ");
	scanf("%d",&b);
	printf("Enter The Number  Of C : ");
	scanf("%d",&c);
	printf("Enter The Number  Of D : ");
	scanf("%d",&d);
	
	//a,b,c,d
	if(a>b)
	{
		//a,c,d
		if(a>c)
		{
			//a,d
			if(a>d)
			{
				printf("A Is Max");
			}
			else
			{
				printf("D Is Max");
			}
		}
		else
		{
			if(c>d)
			{
				printf("C Is Max");
			}
			else
			{
				printf("D Is Max");
			}
		}
	}
	else
	{
		//B,C,D
		if(b>c)
		{
			if(c>d)
			{
				printf("C Is Max");
			}
			else
			{
				printf("D Is Max");
			}
		}
		else
		{
			if(c>d)
			{
				printf("C Is Max");
			}
			else
			{
				printf("D Is Max");
			}
		}
				
	}
}