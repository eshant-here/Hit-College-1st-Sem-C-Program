//1!+2!+3!+4!+5!+6!+7!+8!+9!
#include<stdio.h>
int main()
{
    int n, temp, digit, sum = 0, fact, i;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    temp = n;
    while (temp > 0)
    {
        digit = temp % 10;
        fact = 1;
        for (i = 1; i <= digit; i++)
            fact = fact * i;
        sum = sum + fact;
        temp = temp / 10;
    }
    if (sum == n)
        printf("%d is a Krishnamurthy number", n);
    else
        printf("%d is not a Krishnamurthy number", n);
    return 0;
}