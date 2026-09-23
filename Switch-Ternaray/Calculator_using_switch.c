//Implement calculator uising switch case
#include<stdio.h>
int main()
{
    float a,b;
    int c;
    printf("1-Addition\n2-Subtraction\n3-Multiplication\n4-Division\nChoose the Operator: ");
    scanf("%d",&c);
    printf("Enter the Number: ");
    scanf("%f%f",&a,&b);
    switch (c)
    {
        case 1:
        printf("The Addition of the number is:%.2f ",a+b);
        break;
        case 2:
        printf("The Subtraction of the number is:%.2f ",a-b);
        break;
        case 3:
        printf("The Multiplication of the number is:%.2f ",a*b);
        break;
        case 4:
        if (b==0){
        printf("Error");
        return 0;}
        else {
        printf("The Division of the number is: %.2f",a/b);
        break;}
        deafult:printf("Wrong Input Please Try Again!!");
    }
    return 0;
}