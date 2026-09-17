//Area of Triangle using 3 sides
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    printf("Enter the value of sides of triangle:  \n");
    scanf(" %f %f %f", &a, &b, &c);
    float s= (a+b+c)/2;
    float area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of triangle is:  " "%f",area);
    return 0;
}
