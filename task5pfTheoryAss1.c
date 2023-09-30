#include<stdio.h>
int main(){
    int item1price,item2price,item3price,item4price,item5price;
    printf("Enter item1 Price: ");
    scanf("%d",&item1price);
    printf("Enter item2 Price: ");
    scanf("%d",&item2price);
    printf("Enter item3 Price: ");
    scanf("%d",&item3price);
    printf("Enter item4 Price: ");
    scanf("%d",&item4price);
    printf("Enter item5 Price: ");
    scanf("%d",&item5price);
    int itemTotal =item1price+item2price+item3price+item4price+item5price;
    float profit = 0.15*itemTotal;
    float gst = 0.18* itemTotal;
    float grandTotal = itemTotal + gst;
    printf("\t SALMAN grocery Store\n");
    printf("---------------------------------------\n");
    printf("Description\t\t|\tPrice\n");
    printf("---------------------------------------\n");
    printf("Item 1\t\t\t|\t%d\n",item1price);
    printf("Item 2\t\t\t|\t%d\n",item2price);
    printf("Item 3\t\t\t|\t%d\n",item3price);
    printf("Item 4\t\t\t|\t%d\n",item4price);
    printf("Item 5\t\t\t|\t%d\n",item5price);
    printf("---------------------------------------\n");
    printf("Item Total\t\t|\t%d\n",itemTotal);
    printf("G.S.T\t\t\t|\t%.1f\n",gst);
    printf("---------------------------------------\n");
    printf("Grand Total\t\t|\t%.1f\n",grandTotal);
    printf(" \n");
    printf("Total Profit Earned\t|\t%.2f\n",profit);
}