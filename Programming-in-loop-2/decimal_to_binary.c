//WAP TO CONVERT DECIMAL NUMBER TO EQUIVALENT BINARY NUMBER
#include<stdio.h>
int main()
{
    int n,rem,binary=0,place=1;
    printf("Enter a decimal number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%2;
        binary=binary+rem*place;
        place=place*10;
        n=n/2;
    }
    printf("Binary number is: %d\n",binary);
    return 0;
}