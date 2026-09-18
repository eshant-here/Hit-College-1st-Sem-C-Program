//Check whether the person is eligible for voting or not
#include<stdio.h>
int main()
{
    int a;
    printf("Enter your age: 18");
    scanf("%d", &a);
    if (a>=18)
    {
        printf("You are eligble for voting");
    }
    else 
    {
        printf("You are not eligble for voting");
    }
    return 0;
}
