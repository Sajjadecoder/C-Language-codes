#include<stdio.h>
int main(){
    int num,largest;
    largest = 0;
    for (int i = 1; i < 4; i++)
    {
        printf("enter a num: ");
        scanf("%d",&num);
        if (num>largest)
        {
            largest = num;
        }
    }
    printf("the largest number is: %d", largest);  
}