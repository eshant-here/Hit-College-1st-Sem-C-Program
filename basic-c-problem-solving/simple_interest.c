//simple intrest
#include<stdio.h>
int main()
{
    float p,r,t;
    printf("Enter the principle amount \n ");
    scanf("%f", &p);
    printf("Enter the rate of intrest \n ");
    scanf("%f", &r);
    printf("Enter the time in years \n ");
    scanf("%f", &t);
    float a;
    a=(p*r*t)/100;
    printf("The SI is: %f", a);
    return 0;
}
