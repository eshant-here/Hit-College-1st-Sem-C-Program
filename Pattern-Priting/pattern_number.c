#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
        int a,i;
        for (i=1;i<=n;i++)
        {
            for (a=1; a<=n;a++)
                {
                    printf("%d ",a);
                }
        printf("\n");
    }
    return 0;
}
