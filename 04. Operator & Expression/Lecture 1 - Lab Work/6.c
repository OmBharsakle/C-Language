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
	
	// (x-y-z)3 = (x*x*x) - (y*y*y) - (z*z*z) -(3*(x+y))+(3*(y+z)+(3*(z+x))


	
	ans = (x*x*x) - (y*y*y) - (z*z*z) -(3*(x+y))+(3*(y+z)+(3*(z+x)));
	
	printf("Answere Is : %d",ans);
	
}
