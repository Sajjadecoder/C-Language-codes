#include<stdio.h>
int main(){
    int i;
    for (int i = 0; i < 5; i++)
    {   
        int starCount = i;
        for (int spaces = 0; spaces < 5-i; spaces++)
        {
            printf(" ");
        }
        //printf("*");
    
    for (int stars = 0;stars< 2*i+1; stars++)
    {
        printf("*");
    }
    printf("\n");
    }

    for (int i = 0; i <5; i++)
    {
        for (int spaces = 0; spaces <= i+1; spaces++)
        {
            printf(" ");
        }
        for (int stars = 0; stars <7-2*i; stars++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}       
    
    
