//Q.1 Write a Program to create Student Record System for 3 students using structure.

#include<stdio.h>
#include<string.h>

struct student
{
	int stu_id,stu_age,stu_standard;
	char stu_name[50], stu_course[50],stu_city[50],stu_school[50];
};

int main()
{
 	struct student s[3];
 	char a[100];
 	int i,n;
 	
 	printf("How Many Student Have You In Your Class : ");
 	scanf("%d",&n);
 	
 	for(i=0; i<n; i++)
 	{
 		printf("\nStudent No.%d\n",i+1);
 		
	 	printf("Enter The Student Id : ");
	 	scanf("%d",&s[i].stu_id);
	 		
	 	printf("Enter The Student Age : ");
	 	scanf("%d",&s[i].stu_age);
	 		
	 	printf("Enter The Student Standard : ");
	 	scanf("%d",&s[i].stu_standard);
 		
		printf("Enter The Student Name : ");
		scanf(" %[^\n]s",&a);
		strcpy(s[i].stu_name,a);
	 		
		printf("Enter The Student Course Name : ");
		scanf(" %[^\n]s",&a);
		strcpy(s[i].stu_course,a);
	 		
		printf("Enter The Student City Name : ");
		scanf(" %[^\n]s",&a);
		strcpy(s[i].stu_city,a);
	 		
		printf("Enter The School Name : ");
		scanf(" %[^\n]s",&a);
		strcpy(s[i].stu_school,a);	
	}
 	
 	for(i=0; i<n; i++)
 	{
 		printf("\n\nStudent No.%d Details Are Below\n",i + 1);
	 	printf("\nStudent Id Is : %d\n", s[i].stu_id);
	 	printf("Student Age Is : %d\n", s[i].stu_age);
	 	printf("Student Standard Is : %d\n", s[i].stu_standard);
		printf("Student Name Is : %s\n", s[i].stu_name);
	 	printf("Student Course Is : %s\n", s[i].stu_course);
		printf("Student City Is : %s\n", s[i].stu_city);
	 	printf("Student School Name Is : %s\n", s[i].stu_school);	
	}
}
