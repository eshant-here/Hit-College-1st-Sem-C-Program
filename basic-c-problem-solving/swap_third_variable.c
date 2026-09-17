//Swaping the numbers using third variable
#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the Second number: ");
    scanf("%d", &b);
    temp=a;
    a=b;
    b=temp;
    printf("The value of a after swapping: %d\n", a);
    printf("The value of b after swapping: %d\n", b);
    return 0;

}
