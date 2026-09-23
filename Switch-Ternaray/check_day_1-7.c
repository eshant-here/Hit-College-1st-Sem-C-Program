//wap so innput can show the day of the week
#include<stdio.h>
int main()
{
    int a;
    printf("Enter the Number btw 1-7: ");
    scanf("%d",&a);
    switch (a)
    {
        case 1:
        printf("Its Sunday!!");
        break;
        case 2:
        printf("Its Monday");
        break;
        case 3:
        printf("Its Tuesday");
        break;
        case 4:
        printf("Its Wednesday");
        break;
        case 5:
        printf("Its Thursday");
        break;
        case 6:
        printf("Its Friday");
        break;
        case 7:
        printf("Its Saturday!");
        break;
        deafault:printf("Pls Tri Again");
    }
}