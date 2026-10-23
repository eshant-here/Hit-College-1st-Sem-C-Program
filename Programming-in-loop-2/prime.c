//check whether the number is prime or not
#include<stdio.h>
int main()
{
    int a, i;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a <= 1)
        printf("%d is not prime", a);
    else if (a == 2)
        printf("%d is prime", a);
    else if (a % 2 == 0)
        printf("%d is not prime", a);
    else
    {
        for (i = 3; i < a; i = i + 2)
        {
            if (a % i == 0)
                break;
        }
        if (i >= a)
            printf("%d is prime", a);
        else
            printf("%d is not prime", a);
    }
    return 0;
}