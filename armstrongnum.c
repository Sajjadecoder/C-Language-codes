#include<stdio.h>
int main(){
    int  thisNum,num,n;
    printf("Enter upperbound: ");
    scanf("%d",&n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        num = i;
        while (num>0)
        {
            thisNum = num%10;
            sum+=thisNum*thisNum*thisNum;
            num = num/10;
            
        }
        if (sum == i)
        {
            printf("%d is an armstrong number\n",i);
        }
        sum = 0;
    }
    
}