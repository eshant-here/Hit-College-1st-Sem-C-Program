//WAP TO CONVERT BINARY NUMBER TO EQUIVALENT DECIMAL NUMBER
#include<stdio.h>
int main()
{
    int n,rem,decimal=0,power=1;
    printf("Enter a binary number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        decimal=decimal+rem*power;
        power=power*2;
        n=n/10;
    }
    printf("Decimal number is: %d\n",decimal);
    return 0;
}