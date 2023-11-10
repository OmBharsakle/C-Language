#include<stdio.h>
main()
{
	int x,y,ans;
	
	printf("Enter The Value Of X : ");
	scanf("%d",&x);
	printf("Enter The Value Of Y : ");
	scanf("%d",&y);
	
	// (x-y)2 = (x*x) - (2*x*y) + (y*y)
	
	ans = (x*x) - (2*x*y) + (y*y);
	
	printf("Answere Is : %d",ans);
	
}
