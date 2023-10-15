/*Write a solution to tell the user whether a number is a palindrome. (A palindrome is
a number that is the same written both forward and backward, such as 81318.)*/
#include<stdio.h>
int main(){
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);
    int digits;
    int checkNumber = number;
    printf("Enter the digits in the number: ");
    scanf("%d",&digits);
    int reversedArray[digits];
    for (int i = 0; i < digits; i++)
    {
        reversedArray[i] = number%10;
        number /=10;
    }
    int array[digits];
    for (int i = 0; i < digits; i++)
    {
        array[i] = reversedArray[digits-1-i];
    }
    int count = 0;
    for (int i = 0; i < digits; i++)
    {
        if (array[i] == reversedArray[i])
        {
            count++;
        }
        
        
    }
    if (count!= digits)
    {
        printf("%d is not palindrome",checkNumber);
    }
    else
    {
        printf("%d is palindrome",checkNumber);
    }
    
}