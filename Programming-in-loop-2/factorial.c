#include<stdio.h>
int main()
{
    int i,n,sum=1;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for (i=n;i>=1;i=i-1)
    {
        sum=sum*i;
    }
    printf("%d",sum);
    return 0;
}