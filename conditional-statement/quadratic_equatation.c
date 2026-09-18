//find roots of a quadratic equation
#include<stdio.h>
#include<math.h> //REQUIRED FOR SQRT(ROOT)
int main()
{
    float a, b, c, d, root1, root2;
    printf("Enter the Coefficient of X^2: ");
    scanf("%f", &a);
    printf("Enter the Coefficient of X: ");
    scanf("%f", &b);
    printf("Enter the Coefficient of C: ");
    scanf("%f", &c);
    if (a == 0) {
        printf("Not a quadratic equation (a cannot be 0)\n");
        return 0;
    }
    d = b*b - 4*a*c;
    if (d > 0) {
        root1 = (-b + sqrt(d)) / (2*a);
        root2 = (-b - sqrt(d)) / (2*a);
        printf("Roots are real and different: %.2f and %.2f\n", root1, root2);
    }
    else if (d == 0) {
        root1 = -b / (2*a);
        printf("Roots are real and equal: %.2f\n", root1);
    }
    else {
        printf("No real roots\n");
    }
    return 0;
}