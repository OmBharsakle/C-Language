//3. WAP to Find max. from given 4 no. using nested if else.
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
	
	
	//a,b,c,d
	if(a>b)
	{
		//a,c,d
		if(a>c)
		{
			//a,d
			if(a>d)
			{
				printf("A Is Maximum");
			}
			else
			{
				printf("D Is Maximum");
			}	
		}
		else
		{
			//c,d
			if(c>d)
			{
				printf("C Is Maximum");
			}
			else
			{
				printf("D Is Maximum");
			}
		}
	}
	else
	{
		//B,C,D
		if(b>c)
		{
			 //b,d
			 if(b>d)
			 {
			 	printf("B Is Maximum");
			 }
			 else
			 {
			 	printf("D Is Maximum");
			 }
		}
		else
		{
			if(c>d)
			{
				printf("C Is Maximum");
			}
			else
			{
				printf("D Is Maximum");
			}
		}	
	}
}

