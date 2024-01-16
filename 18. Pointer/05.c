//Q.5 Write A Program To Swap Two Variables Using Pointers.

#include<stdio.h>

int main()
{
	int a,b;
	int *ptr1,*ptr2,*ptr3;
	
	printf("Enter The Value Of A : ");
	scanf("%d",&a);
	
	printf("Enter The Value Of B : ");
	scanf("%d",&b);
	
	ptr1 = &a;
	ptr2 = &b;
	
	printf("\nBefore Swapping : \n");
	
	printf("a : %d\n",*ptr1);
	printf("b : %d",*ptr2);
	
	ptr3 = ptr1;
	ptr1 = ptr2;
	ptr2 = ptr3;
	
	printf("\n\nAfter Swapping : \n");
	
	printf("a : %d\n",*ptr1);
	printf("b : %d",*ptr2);
}
