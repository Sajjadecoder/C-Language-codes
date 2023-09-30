#include<stdio.h>
#include<string.h>
int main(){
    int units,id;
    char name[20];
    float bill,surcharge;
    surcharge = 0;
    printf("start: \n");
    scanf("%d",&id);
    scanf(" %s",&name);
    scanf("%d",&units);
    
    printf("Custiomer ID NO: %d\n",id);
    printf("Customer Name: %s\n",name);
    printf("Unit consumed: %d\n",units);
    if (units>=600)
    {
        bill = 2.00*units;
        printf("Amount charges @Rs 2.00 per unit: %.1f\n",bill);
    }
    else if (units>=400)
    {
        bill = 1.8*units;
        printf("Amount charges @Rs 1.8 per unit: %.1f\n",bill);
    }
    else if (units>=200)
    {
        bill = 1.5*units;
        printf("Amount charges @Rs1.5 per unit: %.1f\n",bill);
    }
    else
    {
        bill = 1.2*units;
        printf("Amount charges @Rs 1.2 per unit: %.1f\n",bill);

    }
    if (bill>400)
    {
        surcharge = 0.15*bill;
        printf("Surcharge Amount: %.1f\n",surcharge);
    }
    printf("Net amount paid by the customer: %.1f",bill+surcharge);

}