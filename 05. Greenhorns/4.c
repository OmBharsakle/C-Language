#include<stdio.h>
main()
{
	int a,b,c,d,ans;
 
	printf("Enter The Value Of Base Salary : ");
	scanf("%d",&a);
	
 	b=a*10/100;
 	c=a*5/100;
 	d=a*8/100;
 	
 	ans=a+b+c+d;

	printf("Value Of Gross Salary : %d\n",ans);
 
	
}
