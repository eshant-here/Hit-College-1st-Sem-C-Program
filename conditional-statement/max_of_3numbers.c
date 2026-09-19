//Max of 3 numbers
#include<stdio.h>
int main()
{
    float a, b, c;
    printf("Enter the numbers to be compared: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == b && b == c)
    {
        printf("All 3 numbers are equal");
    }
    else if (a >= b && a >= c)
    {
        printf("Max no is: %f", a);
    }
    else if (b >= a && b >= c)
    {
        printf("Max no is: %f", b);
    }
    else
    {
        printf("Max no is: %f", c);
    }
    return 0;
}