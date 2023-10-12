#include<stdio.h>
#include<string.h>
int main(){
    int rollNum,year,result,n1,n2,n3,n4;
    char location;
    char city[11];
    char batchName[11];
    printf("Enter Year: ");
    scanf("%d", &year);
    printf("Enter Location: ");
    scanf(" %c", &location);
    printf("Enter Roll number: ");
    scanf("%d", &rollNum);
    switch (year)
    {
    case 21:
        //batchName[10] = "Freshmen";
        strcpy(batchName,"Freshmen");
        break;
    case 20:
        //batchName[10] = "Sophomores";
        strcpy(batchName,"Sophomores");
        break;
    case 19:
        //batchName[10] = "Juniors";
        strcpy(batchName,"Juniors");
        break;
    case 18:
        //batchName[10] = "Seniors";
        strcpy(batchName,"Seniors");
        break;

    default:
        printf("Invalid year");
        break;
    }
    switch (location)
    {
    case 'K':
        n1 = rollNum/1000;
        n2 = (rollNum%1000)/100;
        n3= (rollNum%1000%100)/10;
        n4= rollNum%1000%100%10;
        result = n1+n2+n3+n4;
        //city[10] = 'Karachi';
        strcpy(city,"Karachi");
        break;

    case 'L':
        n3= (rollNum%1000%100)/10;
        n4= rollNum%1000%100%10;
        result = n3*n4;
        //city[10] = 'Lahore';
        strcpy(city,"Lahore");
        break;
    case 'I':
        n4 = rollNum%1000%100%10;
        result = n4*n4*n4;
        //city[10] = 'Islamabad';
        strcpy(city,"Islamabad");
        break;
    default:
        printf("Invalid city");
        break;
    }
    printf("Hello %s , Welcome to FAST %s\nYour result is: %d",batchName,city,result);
}