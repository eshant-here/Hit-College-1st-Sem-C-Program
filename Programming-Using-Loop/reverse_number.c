//wap to reverse a number
#include<stdio.h>
int main()
{
    int n, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
    {
        n = -n;
    }

    for (; n != 0; n = n / 10)
    {
        rev = rev * 10 + n % 10;
    }

    printf("Reverse of the number: %d\n", rev);
    return 0;
}