//Check the number is odd or even
#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number to be checked: ");
    scanf("%d",&a);
    if (a%2==0)
    {
        printf("The number is even");
    }
    else {
        printf("The number is Odd");
    }
    return 0;
}