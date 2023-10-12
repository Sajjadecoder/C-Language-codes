#include<stdio.h>
int main(){
    int n;
    printf("Enter limit: ");
    scanf("%d",&n);
    float sum = 0.0;
    for (int i = 1; i <= n; i++)
    {
        float factorial = 1;
        for (int x = 1; x <= i; x++)
        {
            factorial*=x;
        }
        sum +=(float)(i/factorial);
        
    }
    printf("Sum of series is: %.3f",sum);
}