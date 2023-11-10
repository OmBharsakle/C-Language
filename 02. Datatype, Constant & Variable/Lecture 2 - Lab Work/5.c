//WAP to Simple interest.
#include<stdio.h>
main()
{

	float p,r,t; 
	float ans;
	printf("enter the value of p: ");
	scanf("%f",&p);
	printf("enter the value of r: ");
	scanf("%f",&r);
	printf("enter the value of t: ");
	scanf("%f",&t);
	
	ans = p*r*t/100;
	printf("%.2f",ans);
}
