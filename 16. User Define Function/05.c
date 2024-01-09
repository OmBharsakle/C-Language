#include<stdio.h>
main()
{ 
	int n,n1,n2;
	
	printf("Press 1 for + \nPress 2 for - \nPress 3 for *\nPress 4 for / \nPress 5 for %% \nPress 0 For The Exit\n");
	start:	
	printf("\nEnter 0 To 4 Number : ");
	scanf("%d",&n);
	
	
	if(n!=0)
	{
		printf("Enter Your First Number : ");
		scanf("%d",&n1);
		printf("Enter Your Second Number : ");
		scanf("%d",&n2);
		
		switch(n)
		{
			case 1 : printf("Your Ans Is : %d + %d = %d\n",n1,n2,n1+n2);
			goto start;
			break;
			case 2 : printf("Your Ans Is : %d - %d = %d\n",n1,n2,n1-n2);
			goto start;
			break;
			case 3 : printf("Your Ans Is : %d * %d = %d\n",n1,n2,n1*n2);
			goto start;
			break;
			case 4 : printf("Your Ans Is : %d / %d = %d\n",n1,n2,n1/n2);
			goto start;
			break;
			case 5 : printf("Your Ans Is : %d %% %d = %d\n",n1,n2,n1%n2);
			goto start;
			break;
			default : printf("Enter Valid Number");
		}
	}
	else
	{
		printf("You Are Exit Now");
	}
}
