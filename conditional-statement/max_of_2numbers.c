//Find max num of 2 numbers
#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter the numbers to be compared: ");
    scanf("%f%f", &a,&b);
    if (a>b)
    {
        printf("Max no is: %f",a);
    }
    else {
        printf("Max no is: %f",b);
    }
    return 0;
}