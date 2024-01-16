//Q1.Write A Program To Find The length Of A String Using A Pointer.

#include<stdio.h>
#include<string.h>

int main()
{
 	char a[50];
 	
 	printf("Enter The String You Want : ");
 	gets(a);
     
	char *ptr = &a[0];
	int len=0;

	while(*ptr != '\0')
	{
		len++;
		ptr++;
	}
	
	printf("\nThe Length Of String Is : %d",len); 

}
