//check whether the word is vowel or consonant
#include<stdio.h>
int main()
{
    char a;
    printf("Enter the Word to be Checked: ");
    scanf("%c",&a);
    switch (a)
    {
        case'a':case'e':case'i':case'o':case'u':
        case'A':case'E':case'I':case'O':case'U':
        printf("The word is Vowel");
        break;
        default:printf("The word is Consonant");
    }
}
