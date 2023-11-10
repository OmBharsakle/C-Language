#include<stdio.h>
main()
{
	int x,y,z,ans;
	
	printf("Enter The Value Of X : ");
	scanf("%d",&x);
	printf("Enter The Value Of Y : ");
	scanf("%d",&y);
	printf("Enter The Value Of Y : ");
	scanf("%d",&z);
	
	// (x+y+z)2 = (x*x) + (y*y) + (z*z) + (2*(x*y)+(y*z)+(z*x))



	
	ans = (x*x) + (y*y) + (z*z) + (2*(x*y)+(y*z)+(z*x));
	
	printf("Answere Is : %d",ans);
	
}
