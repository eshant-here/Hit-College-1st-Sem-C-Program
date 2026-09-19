//Max of 5 program
#include<stdio.h>
int main()
{
    float a,b,c,d,e;
    printf("Enter the numbers to be compared: ");
    scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
    if(a==b&&a==c&&a==d&&a==e)
    {
        printf("All numbers are equal");
    }
    else if (a>b&&a>c&&a>d&&a>e)
    {
        printf("Max no among these are: %f ",a);
    }
    else if (b>c&&b>d&&b>e){
        printf("Max no among these are: %f",b);
    }
    else if (c>d&&c>e)
    {
        printf("Max no among these are:%f ",c);  
    }
    else if (d>e)
    {
        printf("Max no among these are: %f",d);
    }
    else 
    {
        printf("Max no among these number are:%f ",e);
    }
    return 0;
}
