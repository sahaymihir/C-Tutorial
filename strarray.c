#include <stdio.h>
#include <string.h>

struct studentinfo
{
    char name[30];
    int rollno;
    char sec[3];

    struct subjects
    {
        int maths;
        int physics;
        int chem;
    } marks;

    float avg;
};

void read_studentinfo (struct studentinfo student[],int n)
{
    for (int i = 0; i < n; i++)
    {
    printf("Student %d\n",i + 1);

    printf("Enter Name: ");
    scanf("%[^\n]%*c", student[i].name);

    printf("Enter Rollno: ");
    scanf("%d", &student[i].rollno);
    getchar();

    printf("Enter Sec: ");
    scanf("%[^\n]%*c", student[i].sec);

    printf("Enter Maths Marks: ");
    scanf("%d", &student[i].marks.maths);

    printf("Enter Physics Marks: ");
    scanf("%d", &student[i].marks.physics);

    printf("Enter Chemistry Marks: ");
    scanf("%d", &student[i].marks.chem);
    getchar();
    }
}

void bubblesort(struct studentinfo student[],int n) {
    struct studentinfo temp;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (student[j].avg > student[j + 1].avg)
            {
                temp = student[j];
                student[j] = student[j + 1];
                student[j + 1] = temp;
            }
        }
    }
}

void average(struct studentinfo student[],int n) {
    for (int i = 0; i < n; i++)
    {
        student[i].avg = ((student[i].marks.maths + student[i].marks.physics + student[i].marks.chem) / 3);
    }
}

int main()
{
    int n;
    struct studentinfo student[50],temp;
    struct temp;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    getchar();

    read_studentinfo(student,n);
    average(student,n);
    bubblesort(student,n);

    printf("%-20s%-20s%-20s%-20s%-20s%-20s%-20s\n", "Name", "Roll No", "Sec", "Maths", "Physics", "Chemisty", "Average");
    for (int i = 0; i < n; i++)
    {
        printf("%-20s%-20d%-20s%-20.2d%-20d%-20d%-20.2f", student[i].name, student[i].rollno, student[i].sec, student[i].marks.maths, student[i].marks.physics, student[i].marks.chem, student[i].avg);
        printf("\n");
    }

    printf("\n");
    return 0;
}