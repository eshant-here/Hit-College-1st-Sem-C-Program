#include<stdio.h>
int main()
{
    int i,n,a=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        a=a+i;
    }
    printf("Summation of Serise is: %d",a);
    return 0;
}