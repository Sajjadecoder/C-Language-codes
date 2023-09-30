#include<stdio.h>
int main() {
    int array[] = {2,4,6,8,10};
    int num;    
    printf("enter num to search ");
    scanf("%d", &num);
    for (int i = 0; i <=4; i++)
    {
        if (num == array[i])
        {
            printf("number found at location %d\n", i);
        }
    }
    
}