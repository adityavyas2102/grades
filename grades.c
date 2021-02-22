#include <stdio.h>
struct student{
    char name[30];
    int m1;
    int m2;
    int m3;
};

int main()
{int marks;
struct student std;
struct student *ptr;
ptr=&std;
printf("Enter Name\n");
scanf("%s",ptr->name);
printf("Enter marks of 1st subject\n");
scanf("%d",&ptr->m1);
printf("Enter marks of 2nd subject\n");
scanf("%d",&ptr->m2);
printf("Enter marks of 3rd subject\n");
scanf("%d",&ptr->m3);
    printf("Name:%s\nTotal marks:%d\n",ptr->name,marks=(ptr->m1+ptr->m2+ptr->m3));
    marks/=3;
    if(marks<40)
    {
        printf("Grade:F");
    }
    else if(marks>=40&&marks<=54)
    {
        printf("Grade:D");
    }
    else if(marks>=55&&marks<=69)
    {
        printf("Grade:C");
    }
    else if(marks>=70&&marks<=84)
    {
        printf("Grade:B");
    }
    else if(marks>=85&&marks<=100)
    {
        printf("Grade:A");
    }
    

    return 0;
}
