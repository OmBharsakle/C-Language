//8. Wap To Check Number Is Palindrom Or Not.
#include<stdio.h>
main()
{
	int n,r,p=0,a;
	
	printf("Enter The Any Number : ");
	scanf("%d",&n);
	
	a = n;//12321
	
	for(;n>0;)
	{
		r = n % 10;//2
		p = r + (p*10);//12
		n = n/10;//1232	
	}
	
	if(p == a)
	{
		printf("Yes entered number is palindrom");
	}
	else
	{
		printf("no entered number is not palindrom");
	}
 		
}
