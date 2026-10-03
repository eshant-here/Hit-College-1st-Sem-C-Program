#include<stdio.h>
int main()
{
    int n, rev = 0,original;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 0)
{
    n = -n;
}
original = n;
    for (; n != 0; n = n / 10)
    {
        rev = rev * 10 + n % 10;
    }
    if (rev==original){
    printf("The number is Palindrome");}
    else
    {
        printf("The number is not palindrome");
    }
    return 0;
}