#include<stdio.h>
int main(){
    int array[8] = {0,0,0,0,0,0,0,0};
    int num;
    printf("Enter num ");
    scanf("%d",&num);
    int i;
    i = 0;
    while (num!=0 && i<8)
    {
        array[i] = num%2;
        num = num/2;
        i++;
    }
    for (int x = 7; x >-1 ; x--)
    {
        printf("%d",array[x]);
    }
}