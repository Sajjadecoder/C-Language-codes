#include<stdio.h>
int main(){
    for (int i = 0; i < 5; i++)
    { 
        int outerspaceCount = 4-i;
        int innerspaceCount = 1;
        if (i == 0)
        {
            for (int spaces = 0; spaces <4; spaces++)
            {
                printf(" ");
            }
            printf("*");

        }
        else
        {
            for ( int x = 0; x < outerspaceCount; x++)
            {
               printf(" ");
            }
            printf("*");
            
            for (int inner = 0; inner < 2*i-1; inner++)
            {   
                printf(" ");
            }
                    
            printf("*");
            }
                //printf("*");
            printf("\n");

                    
            
                        
    }
    // reverse order printing
    for (int i = 0; i < 4; i++)
    {
        for (int outer = 0; outer <= i; outer++)
        {
            printf(" ");
        
        }
        printf("*");
        int maxspaces = 5;
        for (int inner = 0;inner<5-2*i; inner++)
        {
            printf(" ");
        }
        if(i!= 3){
        printf("*");}
        printf("\n");
    }   
         
}
    

