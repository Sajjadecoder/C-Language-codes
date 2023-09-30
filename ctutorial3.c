#include<stdio.h>
// divisible by 2
/*int main() {
    int num;
    printf("enter a number: ");
    scanf("%d", &num);
    printf("%d", num%2 == 0);
    return 0;
}
*/
//num >9 & <100
/*int main() {
    int x;
    printf("enter a number ", &x);
    scanf("%d", &x);
    printf("%d", x>9 && x<100);
    
}
*/
/*
int main() {
    // avg of 3 numbers
    int a,b,c;
    double avg;
    printf("enter a number: ");
    scanf("%d", &a);
    printf("enter a number: ");
    scanf("%d", &b);
    printf("enter a number: ");
    scanf("%d", &c);    
    int sum = a+b+c;
    printf("sum is %d \n", sum);
    printf("average is %f", sum / 3.0);
}
*/
/*
int main() {
    //Grading of the marks
    int a;
    printf("enter a number: ");
    scanf("%d", &a);
    if (a>100) {
        printf("Invalid marks");
    }
    else if (a>=90)
    {
        printf("A*");
    }
    else if (a>=80)
    {
        printf("A");
    }
    else if (a>=70)
    {
        printf("B");
    }
    else
    {
        printf("fail");
    }
}
*/
/*  
int main(){  //for to next loop
    int i;
    for ( i = 0; i < 5; i+=1)
    {
        printf("hello world \n");
    }
    
}
*/
/*
int main(){  // while loop
    int i = 1;
    while (i <= 5)
    {
        printf("%d \n", i);
        i ++;
    }
    
}
*/
/*
int main(){  // printing numbers till the user requirement
    int n;
    printf("enter the number: ");
    scanf("%d", &n);
    for ( int i = 0; i <= n; i++)
    {
        printf("%d \n", i);
    }
    
}
*/
/*
int main(){ // printing the tables of any number
    int n;
    printf("enter a num ");
    scanf("%d", &n);
    for ( int i = 0; i <=10; i++)
    {
        printf("%d \n",n*i);
    }
    
}
*/
/*
int main(){ // odd numbers
    int i;
    for ( i = 5; i <= 50; i++)
    {
        if (i % 2 !=0)
        {
            printf("%d \n",i);
        }
        
    }
    
    
}
*/  
/*
int main(){ // factorials
    int n;
    printf("enter the num to find its factorial: ");
    scanf("%d", &n);
    int factorial = 1;
    for ( int i= 1; i <= n; i++)
    {
        factorial = factorial*i;
    }
    printf("%d \n", factorial );

}  
*/
/*
int main(){ //tables in reverse order
    int n;
    printf("enter num ");
    scanf("%d",&n);
    for ( int i = 10; i >= 0; i--)
    {
        printf("%d \n", n*i);
    }
    
}

int main() { // sum of 2 num
    int num1,num2;
    printf("enter a num: ",num1);
    scanf("%d", &num1);
    printf("enter a num: ",num2);
    scanf("%d", &num2);
    printf("sum %d", num1 + num2);
    return 0;
}
*/
