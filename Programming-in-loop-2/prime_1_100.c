//Prime numbers between 1 to 100
#include<stdio.h>
int main()
{
    int i,j,a;
    printf("The prime numbers between 1 to 100 are:\n");
    for(i=2;i<=100;i++)
    {
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            break;
        }
        if(j>i/2)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}