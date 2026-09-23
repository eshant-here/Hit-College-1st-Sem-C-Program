//Using Ternaray Operator find the largest number among 3 number
#include<stdio.h>
int main()
{
    int a,b,d;
    printf("Enter the numbers: ");
    scanf("%d%d%d",&a,&b,&d);
    int c=(a>b)?(a>d?a:d):(b>d?b:d);
    printf("Largest Number is: %d",c);
    return 0;
}