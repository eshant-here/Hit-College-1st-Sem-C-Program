//summation of series 1/1!+2/2!+3/3!+4/4!+5/5!
#include<stdio.h>
int main()
{
    int i,n;
    float sum=0,fact=1;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for (i=1;i<=n;i=i+1)
    {
        fact=fact*i;
        sum=sum+(i/fact);
    }
    printf("%f",sum);
    return 0;
}