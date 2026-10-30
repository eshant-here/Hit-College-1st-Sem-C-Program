#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (char ch = 'A'; ch < 'A' + n; ch++)
        {
            printf("%c ", ch);
        }
        printf("\n");
    }
    return 0;
}