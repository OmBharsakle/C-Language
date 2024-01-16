//Q.4 Wap To Swap Two Variables Without Using The Third Variable And Using A Oointer.

#include<stdio.h>

int main()
{
	int a,b;
	int *ptr1, *ptr2;
	
	printf("Enter The Value Of A : ");
	scanf("%d",&a);
	
	printf("Enter The Value of B : ");
	scanf("%d",&b);
	
	ptr1 = &a;
	ptr2 = &b;
	
	printf("\nBefore Swapping : \n");
	
	printf("A : %d\n",*ptr1);
	printf("B : %d",*ptr2);
	
	*ptr1 = *ptr1 + *ptr2;
	*ptr2 = *ptr1 - *ptr2;
	*ptr1 = *ptr1 - *ptr2;
	
	printf("\n\nAfter Swapping : \n");
	
	printf("A : %d\n",*ptr1);
	printf("B : %d",*ptr2);
}
