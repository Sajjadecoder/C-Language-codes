#include<stdio.h>
int main(){
    int hours,hourlyRate;float salary;
    char gender;
    printf("Enter hours worked: ");
    scanf("%d",&hours);
    printf("Enter hourly rate: ");
    scanf("%d",&hourlyRate);
    printf("Enter gender: ");
    scanf(" %c",&gender);
    switch (gender)
    {
    case 'M':
        case 'm':
            salary = hourlyRate*hours;
            salary = 1.05*salary;
            if (salary<10000)
            {
                salary = 1.20*salary;
            }
        break;
    case 'F':
        case 'f':
            salary = hourlyRate*hours;
            salary = 1.1*salary;
            if (salary<10000)
            {
                salary = 1.20*salary;
            }
        break;
    
    default:
        printf("Invalid gender\n");
        break;
    }
    printf("Salary of the employee is: %.3f",salary);
}