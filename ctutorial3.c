/*Mr. Johnson would like to know how many As, Bs, Cs, Ds, and Fs his students
received on a test. He has 20 students who took the test. He would like to enter the
student number and the number grade for the test for each student. Develop the so-
lution to print out each student’s student number, number grade, letter grade, and
the total number of As, Bs, Cs, Ds, and Fs. His grading scale is as follows: 90–100
is an A, 78–89 is a B, 65–77 is a C, 50–64 is a D, and below 50 is an F*/
#include<stdio.h>
int main(){
    char grade[20];
    int number[20];
    int stdnum[20];
    int countA=0;int countB=0;int countC=0;int countD=0;int countF=0;
    for (int i = 0; i < 20; i++)
    {
        printf("Enter student's student number: ");
        scanf("%d",&stdnum[i]);
        printf("Enter Numbers scored: ");
        scanf("%d",&number[i]);
        while (number[i]>100 || number[i]<0)
        {
        printf("Enter valid Numbers scored: ");
        scanf("%d",&number[i]);
        }
        if (number[i]>=90)
        {
            grade[i] = 'A';
            countA++;
        }
        else if (number[i]>=78&& number[i]<90)
        {
            grade[i] = 'B';
            countB++;
        }
        else if (number[i]>64 && number[i]<78)
        {
            grade[i] = 'C';
            countC++;
        }
        else if (number[i]>=50 && number[i]<=64)
        {
            grade[i] = 'D';
            countD++;
        }
        else
        {
            grade[i]= 'F';
            countF++;
        }
        
        
    }
    for (int i = 0; i < 20; i++)
    {
        printf("%d\t\t%d\t\t%c\n",stdnum[i],number[i],grade[i]);
    }
    printf("Total count of As: %d\n",countA);
    printf("Total count of Bs: %d\n",countB);
    printf("Total count of Cs: %d\n",countC);
    printf("Total count of Ds: %d\n",countD);
    printf("Total count of Fs: %d",countF);
}