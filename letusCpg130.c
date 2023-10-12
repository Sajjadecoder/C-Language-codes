#include<stdio.h>
int main(){
    /*Write a program to print all prime numbers from 1 to 300.*/
    int i = 1;int n = 0;
    while (i<301)
    {
        for (int j = 2; j < i; j++)
        {
            if (i%j == 0)
            {   
                break;
            }
            else
            {
                if (i == j+1)
                {
                    printf("%d prime\n",i);
                }
                
            }
        }
        i++;
    }
}