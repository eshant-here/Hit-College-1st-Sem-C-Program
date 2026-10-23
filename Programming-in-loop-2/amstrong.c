#include<stdio.h>
int main()
{
    int n, original, temp, digit, count = 0, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;
    temp = n;
    while (temp > 0)
    {
        count++;
        temp = temp / 10;
    }
    temp = n;
    while (temp > 0)
    {
        digit = temp % 10;
        int power = 1;
        for (int i = 0; i < count; i++)
            power = power * digit;
        sum = sum + power;
        temp = temp / 10;
    }

    if (sum == original)
        printf("%d is an Armstrong number.", original);
    else
        printf("%d is not an Armstrong number.", original);
    return 0;
}