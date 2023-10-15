#include<stdio.h>
int main(){
    /*int thisNum=1;
    int prevNum=1;
    printf("%d ",thisNum);
    printf("%d ",prevNum);
    while (thisNum<=6000)
    {
        thisNum += prevNum;
        printf("%d ",thisNum);
        prevNum = thisNum-prevNum;
    }
    */
    for (int i = 0; i <=6; i++)
    {
        if (i%2==0)
        {
            printf("%d\t\t%d\t\t%d\t\t%d\n",i,i,i,i);
        }
        else
        {
            printf("\t\t%d\t\t%d\t\t\n",i,i);
        }
        
    }
    
}