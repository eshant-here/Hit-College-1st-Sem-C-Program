#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    while(b!=0)
    {
        int remainder=a%b;
        a=b;
        b=remainder;
    }
    printf("GCD is %d",a);
    return 0;
}