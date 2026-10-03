//print summation of serise +for odd and - for even
#include<stdio.h>
int main()
{
    int a,i,sum=0;
    printf("Enter the value of N: ");
    scanf("%d",&a);
    for (i=1;i<=a;i++)
    {
        if (i % 2==0)
        {
        sum=sum-i;
        }
        else
        {
            sum=sum+i;
        }
    }
    printf("Summation of serise: %d ",sum);
    return 0;
}