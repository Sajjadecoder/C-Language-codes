#include<stdio.h>
int main(){
    int row,col;
    printf("Enter rows: ");
    scanf("%d",&row);
    printf("Enter columns: ");
    scanf("%d",&col);
    while (row!=col)
    {
    printf("Enter rows(same as columns): ");
    scanf("%d",&row);
    printf("Enter columns(same as rows): ");
    scanf("%d",&col);
    }
    int matrix[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter matrix element: ");
            scanf("%d",&matrix[i][j]);
        }
        
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\t ",matrix[i][j]);

        }
        printf("\n");        
    }
    int maxElement = matrix[0][0];
    int maxLocal[row-2][col-2]; 
    for (int i = 0; i < row-1; i++)
    {
        for (int j = 0; j < col-1; j++)
        {
            if (matrix[i][j]>maxElement)
            {
                maxElement = matrix[i][j];
            }
            

        }
              
    }
    maxLocal[0][0] = maxElement;
    maxElement = matrix[0][1];
    for (int i = 0; i < row-1; i++)
    {
        for (int j = 1; j < col; j++)
        {
            if (matrix[i][j]>maxElement)
            {
                maxElement = matrix[i][j];
            }
            

        }
               
    }
    maxLocal[0][1] = maxElement;
    maxElement = matrix[1][0];
    for (int i = 1; i <= row-1; i++)
    {
        for (int j = 0; j < col-1; j++)
        {
            if (matrix[i][j]>maxElement)
            {
                maxElement = matrix[i][j];
            }
            

        }
               
    }
    maxLocal[1][0] = maxElement;
    maxElement = matrix[1][1];
    for (int i = 1; i < row; i++)
    {
        for (int j = 1; j < col; j++)
        {
            if (matrix[i][j]>maxElement)
            {
                maxElement = matrix[i][j];
            }
            

        }
               
    }
    maxLocal[1][1] = maxElement;
    printf("max local is: \n");
    for (int i = 0; i < row-2; i++)
    {
        for (int j = 0; j < col-2; j++)
        {
            printf("%d\t ",maxLocal[i][j]);

        }
        printf("\n");
    }
    
}