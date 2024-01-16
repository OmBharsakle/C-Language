//Q.1 Write a Program to write even & odd numbers from 50 to 70 into two separate files.
#include<stdio.h>
main()
{
	int number1,number3,i;
	
	FILE *number = fopen("even.txt","w");
	FILE *number2 = fopen("odd.txt","w");
	
	printf("Enter Number From : ");
	scanf("%d",&number1);
	printf("Enter Number TO : ");
	scanf("%d",&number3);
	
	fprintf(number,"Your Even Number Is Below\n");
	fprintf(number2,"Your Odd Number Is Below\n");
	
	for(i=number1; i<number3; i++)
	{
		if(i%2==0)
		{
			fprintf(number,"%d ",i);
		}
		else
		{
			fprintf(number2,"%d ",i);
		}
	}
}
