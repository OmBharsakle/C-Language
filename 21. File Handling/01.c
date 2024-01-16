//Q1. WAP To Print Your Basic Information In HTML Using File Handling Using Dev C++.
#include <stdio.h>
main() 
{
	int age;
	double mob;
   	char name[50],place[20],skill[20];
   
    FILE *htmlFile;
    
    htmlFile = fopen("index.html", "w");
    
//    printf("Enter Your Name : ");
//    scanf(" %[^\n]",name);
    char n='"';
    printf("Enter Your Age : ");
    scanf("%d",&age);
    
    printf("Enter Your Mobile Number : ");
    scanf("%d",&mob);
    
    printf("Enter Your Place : ");
    scanf(" %[^\n]",place);
    
    printf("Enter Your Skill : ");
    scanf(" %[^\n]",skill);
    
  
    fprintf(htmlFile, "<html>\n");
    fprintf(htmlFile, "<head>\n");
    fprintf(htmlFile, "<title>My Basic Information</title>\n");
    fprintf(htmlFile, "<style>*{font-family:poppins;text-align: center;}</style>\n");
    fprintf(htmlFile, "</head>\n");
    fprintf(htmlFile, "<body>\n");
    fprintf(htmlFile, "<h1>My Basic Information</h1>\n");
    fprintf(htmlFile, "<p id=%cname1%c>Name :  </p>\n",n,n);
    fprintf(htmlFile, "<p>Age : %d Year's Old</p>\n",age);
    fprintf(htmlFile, "<p>Mobile Number : %.0lf</p>\n",mob);
    fprintf(htmlFile, "<p>Location : %s </p>\n",place);
    fprintf(htmlFile, "<h1>My Skill's</h1>\n");
    fprintf(htmlFile, "<p>%s</p>\n",skill);
    fprintf(htmlFile, "<script>var name = prompt(%center%c); ",n,n);
    fprintf(htmlFile, " document.querySelector(%c#name1%c).textContent = %cYour Name : %c + name; </script>\n",n,n,n,n);
    fprintf(htmlFile, "</body>\n");
    fprintf(htmlFile, "</html>\n");

}



