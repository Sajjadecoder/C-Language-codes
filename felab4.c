#include<stdio.h>
int main(){
    int smaller,num1,num2,i,gcd;
    printf("Enter first number ");
    scanf("%d", &num1);
    printf("Enter second number ");
    scanf("%d", &num2);
    if (num1>=num2)
    {
        smaller = num2;
    }
    else
    {
        smaller = num1;
    }
    //printf("%d\n",smaller);
    for ( i = 1; i <= smaller; i++)
    {
        int num1Check = num1 % i;
        int num2Check = num2 % i;
        if (num1Check == 0 && num2Check==0)
        {
            gcd = i;
        }
        
    }
    printf("gcd is %d",gcd);
}