/*An Insurance company follows following rules to calculate
premium.
(1) If a person’s health is excellent and the person is between
25 and 35 years of age and lives in a city and is a male
then the premium is Rs. 4 per thousand and his policy
amount cannot exceed Rs. 2 lakhs.
(2) If a person satisfies all the above conditions except that
the sex is female then the premium is Rs. 3 per thousand
and her policy amount cannot exceed Rs. 1 lakh.
(3) If a person’s health is poor and the person is between 25
and 35 years of age and lives in a village and is a male
then the premium is Rs. 6 per thousand and his policy
cannot exceed Rs. 10,000.
(4) In all other cases the person is not insured.
Write a program to output whether the person should be
insured or not, his/her premium rate and maximum amount
for which he/she can be insured.*/
#include<stdio.h>
int main(){
    char sex,residence,health;int age;
    printf("Enter Health(E for Excellent,P for Poor): ");
    scanf(" %c",&health);

    printf("Enter age: ");
    scanf("%d",&age);
    printf("Enter sex(M for Male,F for Female): ");
    scanf(" %c",&sex);
    printf("Enter residence(C for city,V for village): ");
    scanf(" %c",&residence);
    if (health=='E')
    {
        if (age >= 25 && age <= 35)
        {
            if (residence=='C')
            {
                if (sex == 'M')
                {
                    printf("Rs.4 per thousand\npolicy cannot exceed Rs.2 lakhs ");
                }
                else
                {
                    printf("Rs.3 per thousand\npolicy cannot exceed Rs.1 lakhs ");
                    
                }
                
            }
            
        }
        else
        {
        printf("Person cannot be insured");
        }
    
        
    }
    
    if (health=='P')
    {
        if (age >= 25 && age <= 35)
        {
            if (residence=='V')
            {
                if (sex == 'M')
                {
                    printf("Rs.6 per thousand\npolicy cannot exceed Rs.10,000");
                }
                
            }
            
        }
        
    }
    else
    {
        printf("Person cannot be insured");
    }
}