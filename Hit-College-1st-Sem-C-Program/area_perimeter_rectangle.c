// Area and perimeter of rectangle
#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter the value of sides or rectangle:  \n");
    scanf(" %f %f", &a, &b);
    float c = 2*(a+b);
    float d = (a*b);
    printf("The area of the rectangle is:  " "%f",d);
    printf("The Perimeter of a ectangle is" "%f",c);
    return 0;
    
}