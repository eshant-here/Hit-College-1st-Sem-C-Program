// Avg of 3 number 
#include<stdio.h>
int main()
{
    float a,b,c;
    printf("Enter the Numbers:  \n");
    scanf ("%f %f %f", &a, &b, &c);
    float d;
    d=(a+b+c)/3;
    printf("The Avg is: " "%f", d);
    return 0;

}