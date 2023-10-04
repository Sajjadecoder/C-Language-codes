#include<stdio.h>
int main(){
    int id,count;
    char name[20];
    float marksobt,markstotal,total;
    char subName[20];
    printf("Enter Name: ");
    scanf("%s",&name);

    printf("Enter Student ID: ");
    scanf("%d",&id);


    printf("Enter the count of subjects: ");
    scanf("%d",&count);
    for (int  i = 0; i < count; i++)
    {
        printf("Enter Subject Name: ");
        scanf("%s",&subName);
        printf("Enter the Marks obtained: ");
        scanf("%f",&marksobt);
        printf("Enter Total marks: ");
        scanf("%f",&markstotal);
        float marks = (marksobt/markstotal)*100;
        printf("%s Marks of %s is %.2f\n",subName,name,marks);
        if (marks>=90)
        {
            printf("Grade is A*\n");

        }
        else if (marks>=80)
        {
            printf("Grade is A\n");

        } 
        else if (marks>=70)
        {
            printf("Grade is B\n");

        }
        else if (marks>=60)
        {
            printf("Grade is C\n");

        }
        else{
            printf("Grade is F\n");
        }
        total += marks;

    }
    float avgMarks = total/count;
    if (avgMarks>=90){printf("Average grade is A*\n");printf("Congratulations");}
    else if (avgMarks>=80){printf("Average grade is A");printf("Congratulations");}
    else if (avgMarks>=70){printf("Average grade is B\n");printf("Needs improvement");}
    else if (avgMarks>=60){ printf("Average grade is C\n");printf("Needs improvement");}
    else{printf("Average grade is F\n");printf("Seek help");}    
}