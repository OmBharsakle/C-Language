//Q.2 Write A Program To Create An Employee Record System With An Array Of Objects For A Given N Number Of Employees Using Structure. 

#include<stdio.h>
#include<string.h>

struct employee
{
	int emp_id, emp_age, emp_experience;
	char emp_name[50],emp_role[50],emp_city[50],emp_company_name[50];
};

int main()
{
	int n,i;
	printf("Enter The Number Of Employee : ");
	scanf("%d",&n);
	
 	struct employee s[n];
 	char a[100];
 	
 	for(i=0; i<n; i++)
 	{
 		printf("\nEmployee No.%d\n",i+1);
 		
	 	printf("Enter The Employee Id : ");
	 	scanf("%d",&s[i].emp_id);
	 		
	 	printf("Enter The Employee Age : ");
	 	scanf("%d",&s[i].emp_age);
	 		
	 	printf("Enter The Employee Experience Of Year : ");
	 	scanf("%d",&s[i].emp_experience);
 		
		printf("Enter The Employee Name : ");
		scanf(" %[^\n]s",&a);
		strcpy(s[i].emp_name,a);
	 		
		printf("Enter The Employee Role Number : ");
		strcpy(s[i].emp_role,a);
	 		
		printf("Enter The Employee City  : ");
		scanf(" %[^\n]s",&a);
		strcpy(s[i].emp_city,a);
	 		
		printf("Enter The Employee Company Name : ");
		scanf(" %[^\n]s",&a);
		strcpy(s[i].emp_company_name,a);	
	}
 	
 	for(i=0; i<n; i++)
 	{
 		printf("\n\nEmployee No.%d Details Are Below\n",i + 1);
	 	printf("\nEmployee Id Is : %d\n", s[i].emp_id);
	 	printf("Employee Age Is : %d\n", s[i].emp_age);
	 	printf("Employee Experience Is : %d Year\n", s[i].emp_experience);
		printf("Employee Name Is : %s\n", s[i].emp_name);
	 	printf("Employee Role Is : %s\n", s[i].emp_role);
		printf("Employee City Is : %s\n", s[i].emp_city);
	 	printf("Employee Company Name Is : %s\n", s[i].emp_company_name);	
	}
 	
 	
 	return 0;
}
