//Q.2 Wap To Find The Address Of The Chain Pointer.

#include<stdio.h>

int main()
{
	int a;
	
	printf("Enter The Value Of A : ");
	scanf("%d",&a);
	
	int *ptr1 = &a;
	int **ptr2 = &ptr1;
	int ***ptr3 = &ptr2;
	int ****ptr4 = &ptr3;
	
	printf("\n%d",****ptr4);
}
