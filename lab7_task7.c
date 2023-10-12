#include<stdio.h>
int main(){
    int martix1 [2][2];
    int martix2 [2][2];
    for (int i = 0; i < 2; i++)
    {   for (int j = 0; j < 2; j++)
    {
        printf("Enter element: ");
        scanf("%d",&martix1[i][j]);
    }
    
        
    }
    for (int a = 0; a < 2; a++)
    {   for (int b = 0; b < 2; b++)
    {
        printf("Enter element: ");
        scanf("%d",&martix2[a][b]);
    }
    
        
    }
    printf("Matrix 1: \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j= 0; j < 2; j++)
        {
            printf("%d\t\t",martix1[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

    printf("Matrix 2: \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j= 0; j < 2; j++)
        {
            printf("%d\t\t",martix2[i][j]);
        }
        printf("\n");
    }
    printf("Multiplying these 2 matrices will give: \n");
    int a = martix1[0][0]*martix2[0][0] +  martix1[0][1]*martix2[1][0];
    int b = martix1[0][0]*martix2[0][1] +  martix1[0][1]*martix2[1][1];
    int c = martix1[1][0]*martix2[0][0] +  martix1[1][1]*martix2[1][0];
    int d = martix1[1][0]*martix2[0][1] +  martix1[1][1]*martix2[1][1];
    printf("%d\t\t%d\n%d\t\t%d",a,b,c,d);   
    
    
}