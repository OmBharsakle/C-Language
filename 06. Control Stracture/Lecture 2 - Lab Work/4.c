//4. WAP to Find min. from given 5 no. using nested if else.
#include<stdio.h>

main()

{
	int a,b,c,d,e;
	
	printf("Enter The Value Of A : ");
	scanf("%d",&a);
	printf("Enter The Value Of B : ");
	scanf("%d",&b);
	printf("Enter The Value Of C : ");
	scanf("%d",&c);
	printf("Enter The Value Of D : ");
	scanf("%d",&d);
	printf("Enter The Value Of E : ");
	scanf("%d",&e);
	
	//a,b,c,d,e
	if(a<b)
	{
		//a,c,d,e
		if(a<c)
		{
			//a,d,e
			if(a<d)
			{
				//a,e
				if(a<e)
				{
					printf("A Is Minimum");
				}
				else
				{
					printf("E Is Minimum");
				}
			}
			else
			{
				if(d<e)
				{
					printf("D Is Minimum");
				}
				else
				{
					printf("E Is Minimum");
				}
			}
		}
		else
		{
			//c,d,e
			if(c<d)
			{
				//c,e
				if(c<e)
				{
					printf("C Is Minimum");
				}
				else
				{
					printf("E Is Minimum");
				}	
			}	
			else
			{
				if(d<e)
				{
					printf("D Is Minimum");
				}
				else
				{
					printf("E Is Minimum");
				}
			}
		}
	}
	else
	{
		//b,c,d,e	
		if(b<c)
		{
			//b,d,e
			if(b<d)
			{
				//d,e
				if(d<e)
				{
					printf("D Is Minimum");
				}
				else
				{
					printf("E Is Minimum");
				}
			}
			else
			{
				if(d<e)
				{
					printf("D Is Minimum");
				}
				else
				{
					printf("E Is Minimum");
				}
			}
		}
		else
		{
			//c,d,e
			if(c<d)
			{
				if(d<e)
				{
					printf("D Is Minimum");	
				}
				else
				{
					printf("E Is Minimum");
				}	
			}
			else
			{
				if(d<e)
				{
					printf("D Is Minimum");	
				}
				else
				{
					printf("E Is Minimum");
				}
			}	
		}
	}
}
