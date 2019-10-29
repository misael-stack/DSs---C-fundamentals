#include <stdio.h>
#include <string.h>
struct student_grade
{
	 char id[20],name[20], code[30], course_name[100],grade;
     int credit;
};
 void code_grade(struct student_grade record[2]); 
int main() 
{
     int i;
     struct   student_grade record[2],s1;
      strcpy(s1.id, "mit/ur/1098/10");
      strcpy(s1.name, "misael ");
      printf(" Axum University \n Student Grades Report\n");
      printf(" ID :%s\n\n",s1.id);
       printf(" Name :%s\n",s1.name);
      
      strcpy(record[0].code, "IT3201");
      strcpy(record[0].course_name, "Data Structure");
      record[0].credit=4;
      record[0].grade='A';
      
      
      strcpy(record[1].code, "IT3203");
      strcpy(record[1].course_name, "computer networks");
      record[1].credit=4;
      record[1].grade='B';
      code_grade(record);
     return 0;
}
void code_grade(struct student_grade record[2])
{
int i;

printf(" Code\tGrade\n");
for(i=0;i<2;i++)
     {
         printf(" %s\t%c\n", record[i].code,record[i].grade);
     }


printf(" Course matrix\n");

printf(" Code\tCourse_name \tCredit\n");
for(i=0;i<2;i++)
     {
         printf(" %s\t%s\t%d\n", record[i].code,record[i].course_name,record[i].credit);
     }

}

