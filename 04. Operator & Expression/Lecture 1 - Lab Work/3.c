#include<stdio.h>
main()
{
	int x,y,ans;
	
	printf("Enter The Value Of X : ");
	scanf("%d",&x);
	printf("Enter The Value Of Y : ");
	scanf("%d",&y);
	
	// (x+y)3 = (x*x*x) + ((3*x*y)*(x+y)) + (y*y*y)
	
	ans = (x*x*x) + ((3*x*y)*(x+y)) + (y*y*y);
	
	printf("Answere Is : %d",ans);
	
}
