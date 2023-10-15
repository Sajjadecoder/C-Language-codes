#include<stdio.h>
int main(){
    /*int barcode,n1,n2,n4,n5;
    printf("Enter barcode: ");
    scanf("%d",&barcode);
    if (barcode<10000 || barcode>99999)
    {
        while (barcode>9999 && barcode<=99999)
        {
            printf("Enter valid barcode: ");
            scanf("%d",&barcode);
    
        }
        
    }
    n1 = barcode/10000;
    n2 = barcode%10000/1000;
    n4 = barcode%10000%1000%100/10;
    n5 = barcode%10000%1000%100%10;
    if ((n1%2==0||n1%4==0) && (n2%2==0||n2%4==0)  )
    {
        printf("Category 1");
    }
    else if (n5%3==0 && n4%2==1)
    {
        printf("Category 2");
    }
    else
    {
        printf("Category 3");
    }
    */
   int n,largeSpaces,mediumSpaces,smallSpaces;char size;
   printf("Enter number of cars ");
   scanf("%d",&n);
   printf("Enter number of Large spaces ");
   scanf("%d",&largeSpaces);
   printf("Enter number of Medium Spaces ");
   scanf("%d",&mediumSpaces);
   printf("Enter number of Small spaces ");
   scanf("%d",&smallSpaces);
   int feedbackScore = 0;
   int largeOccupied = 0;int smallOccupied = 0;int mediumOccupied = 0;
   for (int i = 0; i < n; i++)
   {
        printf("Enter car %d size: ",i+1);
        scanf(" %c",&size);
        switch (size)
        {
            case 'L':
                case 'l':
                if (largeSpaces== 0)
                {
                    printf("No space\n");
                    feedbackScore-=50;
                
                }
                else
                {
                    largeOccupied++;
                    feedbackScore+=5;
                    largeSpaces--;
                }
                break;
            case 'M':
                case 'm':
                    if (largeSpaces!=0)
                    {
                        feedbackScore+=10;
                        largeOccupied++;
                        largeSpaces--;
                    }
                    else
                    {
                        if (mediumSpaces== 0 )
                        {
                        printf("No space\n");
                        feedbackScore-=50;
                        }
                        else
                        {
                            mediumOccupied++;
                            feedbackScore+=5;
                            mediumSpaces--;
                        }
                
                    }
                    break;
            case 'S':
                case 's':
                    if (largeSpaces!=0)
                    {
                        feedbackScore+=10;
                        largeOccupied++;
                        largeSpaces--;
                    }
                    else if (mediumSpaces!=0)
                    {
                        feedbackScore+=10;
                        mediumOccupied++;
                        mediumSpaces--;
                    }
                    else if(smallSpaces==0){
                        printf("No spaces\n");
                        feedbackScore-=50;
                    }
                    else
                    {
                        smallOccupied++;
                        feedbackScore+=5;
                        smallSpaces--;
                    }
                    break;


    default:
        printf("Invalid input");
        break;
    }
   }
   printf("Total feedback score: %d\n",feedbackScore);
   printf("Total Large spaces occupied: %d\n",largeOccupied);
   printf("Total Medium spaces occupied: %d\n",mediumOccupied);
   printf("Total Small spaces occupied: %d\n",smallOccupied);
}