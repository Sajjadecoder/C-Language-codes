#include<stdio.h>
int main(){
    int n;
    printf("Enter array size: ");
    scanf("%d",&n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",&array[i]);
    }
    printf("Enter d position: ");
    int d;
    scanf("%d",&d);
    printf("Array before the shift is: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    printf("Array after the shift is: \n");
    for (int i = d; i < n; i++)
    {
        printf("%d ",array[i]);
    }
    for (int i = 0; i < d; i++)
    {
        printf("%d ",array[i]);
    }
    


}   