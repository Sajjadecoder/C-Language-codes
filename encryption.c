#include<stdio.h>
int main(){
    int temp,code,digit1,digit2,digit3,digit4;
    printf("Enter code: ");
    scanf("%d",&code);
    if (code>=1000 && code<=9999)
    {
        digit1 = code/1000;
        digit2 = (code%1000)/100;
        digit3 = ((code%1000)%100)/10;
        digit4 = code%1000%100%10;
        int total = digit1+digit2+digit3+digit4;
        digit1 = (digit1 + total + 6) %10;
        digit4 = (digit4 + total + 6) %10;
        digit3 = (digit3 + total + 6) %10;
        digit2 = (digit2 + total + 6) %10;
        temp = digit1;
        digit1 = digit3;
        digit3 = temp;
        temp = digit2;
        digit2 = digit4;
        digit4 = temp;
        printf("Encrypted code is: %d%d%d%d",digit1,digit2,digit3,digit4);
    }
    else
    {
        printf("invalid length of code");
    }
    /*int temp,code,n1,n2,n3,n4,n5;
    printf("Enter code: ");
    scanf("%d",&code);
    n4  = (code%10000%1000%100)/10;
    n5 = (code%10000%1000%100%10);
    n4 = n4+n5;
    n1 = code/10000;
    n2 = (code%10000)/1000;
    n3 = (code %10000%1000)/100;
    code = n1*1000+n2*100+n3*10+n4;
    code = code%10000;
    temp = n1;
    n1 = n4;
    n4 = temp;
    temp = n2;
    n2 = n3;
    n3 = temp;
    printf("%d%d%d%d",n1,n2,n3,n4);
    */
}
