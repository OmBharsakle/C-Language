#include<stdio.h>
main()
{
	int age;
	
	//User Input 
	printf("Enter The Your Age :");
	scanf("%d",&age);
	
	//Control Stracture Use And Check Condition
	if(age>0)
	{
		if(age>100)
		{
			printf("You Are Still Alive!");
		}
		else
		{
			printf("Your Age Is Parfact");
		}
	}
	else
	{
		if(age==0)
		{
			printf("Your Age Value Is Neutral");
		}
		else
		{
			printf("Your Age Value Is Nagative");
		}
	}
}
