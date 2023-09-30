#include<stdio.h>
#include<string.h>
int main(){
    char courseName[100];
    float mid1obt,mid1total,mid1weightage,mid2weightage,finalweightage,assweightage,quizweightage,mid2obt,mid2total,finalobt,finaltotal,assobt,asstotal,quizobt,quiztotal;
    float total,mid1,mid2,final,ass,quiz,gpa,sgpa;
    int coursesNum,quizcount,asscount;
    float assobtSum=0.0;
    float asstotalSum = 0.0;
    sgpa = 0.0;
    printf("SEMESTER GPA (SGPA) CALCULATOR\n\n");
    printf("Enter the number of courses in your semester(exclude labs plis): ");
    scanf("%d",&coursesNum);
    float Mid1[coursesNum];
    float Mid2[coursesNum];
    float Final[coursesNum];
    float Ass[coursesNum];
    float Quiz[coursesNum];
    float Gpa[coursesNum];
    float percentage[coursesNum];
    
    char courses[coursesNum][20];
    for (int i = 0; i < coursesNum; i++)
    {
        printf("Enter course %d name: ",i+1);
        scanf("%s",&courses[i]);
        
       
        printf("Enter %s Mid1 obtained marks: ",courses[i]);
        scanf("%f",&mid1obt);
        printf("Enter %s Mid1 total marks: ",courses[i]);
        scanf("%f",&mid1total);
        printf("Enter weightage: ");
        scanf("%f",&mid1weightage);
        mid1 = (mid1obt/mid1total)*mid1weightage;
        //printf("MID 1: %.1f",mid1);
        printf("Enter %s Mid2 obtained marks: ",courses[i]);
        scanf("%f",&mid2obt);
        printf("Enter %s Mid2 total marks: ",courses[i]);
        scanf("%f",&mid2total);
        printf("Enter weightage: ");
        scanf("%f",&mid2weightage);
        printf("Enter %s Finals obtained marks: ",courses[i]);
        scanf("%f",&finalobt);
        printf("Enter %s Finals total marks: ",courses[i]);
        scanf("%f",&finaltotal);
        printf("Enter weightage: ");
        scanf("%f",&finalweightage);
        printf("Enter no. of assignments: ");
        scanf("%d",&asscount);
        printf("Enter assigments weightage: ");
        scanf("%f",&assweightage);
        for (int j = 0; j < asscount; j++)
        {
            printf("Enter assignment %d obtained marks: ",j+1);
            scanf("%f",&assobt);
            printf("Enter assignment %d total marks: ",j+1);
            scanf("%f",&asstotal);
            assobtSum = assobtSum + assobt;
            asstotalSum += asstotal;

        }
        
        printf("Enter no. of quizzes: ");
        scanf("%d",&quizcount);
        float quizobtSum = 0.0;
        float quiztotalSum = 0.0;
        
        printf("Enter quiz weightage: ");
        scanf("%f",&quizweightage);
        for (int k = 0; k < quizcount; k++)
        {
            printf("Enter quiz %d obtained marks: ",k+1);
            scanf("%f",&quizobt);
            printf("Enter quiz %d total marks: ",k+1);
            scanf("%f",&quiztotal);
            quizobtSum = quizobtSum + quizobt;
            quiztotalSum += quiztotal;

        }
        quiz = (quizobtSum/quiztotalSum)*quizweightage;
        Quiz[i] = quiz;

        mid1 = (mid1obt/mid1total)*mid1weightage;
        Mid1[i] = mid1;
        mid2 = (mid2obt/mid2total)*mid2weightage;
        Mid2[i] = mid2;
        final = (finalobt/finaltotal)*finalweightage;
        Final[i] = final;
        ass = (assobtSum/asstotalSum)*assweightage;
        Ass[i] = ass;
        total= quiz+mid1+mid2+final+ass;
        percentage[i] = total;
        if (total>=86.0 && total <=100.0)
        {
            Gpa[i] = 4.0;
        }
        else if(total>=82.0){
            Gpa[i] = 3.67;
        
        }
        else if (total>=78.0)
        {
            Gpa[i] = 3.33;
        }
        else if (total>=74.0)
        {
            Gpa[i] = 3.0;
        }
        else if (total>=70.0)
        {
            Gpa[i] = 2.67;
        }
        else if (total>=66.0)
        {
            Gpa[i] = 2.33;
        }
        else if (total>=62.0)
        {
            Gpa[i] = 2.0;
        }
        else if (total>=58.0)
        {
            Gpa[i]= 1.67;
        }
        else if (total>=54.0)
        {
            Gpa[i] = 1.33;
        }
        else if (total>=50.0)
        {
            Gpa[i] = 1.0;
        } 
        sgpa += Gpa[i];

    }
    for (int s = 0; s < coursesNum; s++)
    {
        printf("Course Name: %s\n",courses[s]);
        printf("Assignments(out of 10): %.2f\n",Ass[s]);
        printf("Quizzes: %.2f\n",Quiz[s]);
        printf("Mid 1(out of 15): %.2f\n",Mid1[s]);
        printf("Mid 2(out of 15): %.2f\n",Mid2[s]);
        printf("Finals: %.2f\n",Final[s]);
        printf("Percentage: %.2f\n",percentage[s]);
        printf("GPA: %.2f\n\n\n",Gpa[s]);
    }
    printf("\nYour Semester's GPA is: %.2f",sgpa/coursesNum);
}