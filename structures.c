#include <stdio.h>
#include <string.h>

struct student
    {
        char name[20];
        int rollno;
        char sec[3];
        float GPA;
    } stud1, stud2;

int main()
{
    strcpy(stud1.name,"Mihir");
    stud1.rollno = 31;
    strcpy(stud1.sec,"PG");
    stud1.GPA = 8.10;

    strcpy(stud2.name,"Harsh");
    stud2.rollno = 37;
    strcpy(stud2.sec,"PG");
    stud2.GPA = 9.33;

    printf("%-20s%-20s%-20s%-20s\n","Name","Roll No","Sec","GPA");
    printf("%-20s%-20d%-20s%-20.2f\n",stud1.name,stud1.rollno,stud1.sec,stud1.GPA);
    printf("%-20s%-20d%-20s%-20.2f",stud2.name,stud2.rollno,stud2.sec,stud2.GPA);
    printf("\n");
    return 0;
}