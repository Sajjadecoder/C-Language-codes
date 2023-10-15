#include<stdio.h>
/*Last Stop Boutique is having a five-day sale. Each day, starting on Monday, the
price will drop 10% of the previous day’s price. For example, if the original price of
a product is $20.00, the sale price on Monday would be $18.00 (10% less than the
original price). On Tuesday the sale price would be $16.20 (10% less than
Monday). On Wednesday the sale price would be $14.58; on Thursday the sale
price would be $13.12; and on Friday the sale price would be $11.81. Develop a
solution that will calculate the price of an item for each of the five days, given the
original price. Test the solution for an item costing $10.00.*/
int main(){
    float cost;

    printf("Enter original cost: ");
    scanf("%f",&cost);
    for (int i = 0; i < 5; i++)
    {   
        cost = cost*0.9;
        printf("Cost after day %d is: %.2f\n",i+1,cost);
    }
    
}