#include<stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
    {
        n = -n;
    }

    for ( ;n != 0; n = n / 10)
    {
        sum = sum + n % 10;
    }

    printf("Sum of digits: %d\n", sum);
    return 0;
}