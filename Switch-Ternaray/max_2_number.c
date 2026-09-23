//Using Ternaray Operator find the largest number among 2 number
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the numbers: ");
    scanf("%d%d",&a,&b);
    int c=(a>b)? a:b;
    printf("Largest Number is: %d",c);
    return 0;
}