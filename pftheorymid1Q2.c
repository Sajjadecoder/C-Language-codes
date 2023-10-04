#include<stdio.h>
int main(){

    int menu,expenses,weeklySalary;                                 //this is Question3 of Mid1
    float foodItems,bill,education,health;
    printf("1. Calculate yearly salary and assign a salary class\n");
    printf("2. Calculate monthly expenses and assign a household class\n");
    printf("3. Calculate monthly deficit or surplus\n");
    printf("4. Exit\n");
    printf("Enter menu: ");
    scanf("%d",&menu);
    switch (menu)
    {
    case 1:
        printf("Enter weekly salary: ");
        scanf("%d",&weeklySalary);
        int yearlySalary = weeklySalary * 52;
        if (yearlySalary>90000)
        {
            printf("High income");

        }
        else if (yearlySalary>60000)
        {
            printf("Middle income");
        }
        else
        {
            printf("Low income");
        }
        
        break;
    case 2:
        printf("Enter Weekly expenses of food items: ");
        scanf("%f",&foodItems);
        printf("Enter Weekly expenses of bill: ");
        scanf("%f",&bill);
        printf("Enter Weekly expenses of education: ");
        scanf("%f",&education);
        printf("Enter Weekly expenses of health: ");
        scanf("%f",&health);
        printf("Total weekly expenses is %.2f",foodItems+health+education+bill);
        printf("Total monthly expenses is %.2f",foodItems*4+health*4+education*4+bill*4);
        printf("Total yearly expenses is %.2f",foodItems*52+health*52+education*52+bill*52);
        if (foodItems*4+health*4+education*4+bill*4>1000000)
        {
            printf("Elite class");

        }
        else if (foodItems*4+health*4+education*4+bill*4)
        {
            printf("High class");
        }
        else if (foodItems*4+health*4+education*4+bill*4)
        {
            printf("Medium class");
        }
        else{
            printf("Low class");
        }
        break;
    case 3:
        printf("Enter weekly salary: ");
        scanf("%d",&weeklySalary);
        printf("Enter total monthly expense: ");
        scanf("%d",&expenses);
        if (expenses>weeklySalary*4)
        {   
            printf("Monthly income: %d\n",weeklySalary*4);
            printf("Monthly Expenses: %d\n",expenses);
            printf("There's a deficit of $%d",expenses-weeklySalary*4);
        }
        else if (expenses<weeklySalary*4)
        {   
            printf("Monthly income: %d\n",weeklySalary*4);
            printf("Monthly Expenses: %d\n",expenses);
            printf("There's a surplus of $%d",weeklySalary*4-expenses);
        }
        else
        {   
            printf("Monthly income: %d\n",weeklySalary*4);
            printf("Monthly Expenses: %d\n",expenses);
            printf("Neither deficit nor surplus");
        }
    break;
    default:
        break;
    }
}
