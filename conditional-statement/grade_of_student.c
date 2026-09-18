//Grade of Student acc to the percentage
#include<stdio.h>
int main()
{
    int phy,math,comp,eng,chem,per;
    printf("Enter the Marks of English: ");
    scanf("%d",&eng);
    printf("Enter the Marks of Math: ");
    scanf("%d",&math);
    printf("Enter the Marks of Physics: ");
    scanf("%d",&phy);
    printf("Enter the Marks of Chemistry: ");
    scanf("%d",&chem);
    printf("Enter the Marks of Computer: ");
    scanf("%d",&comp);
    per=((eng+math+phy+chem+comp)/5);
    if (per>=90)
    {
        printf("A grade");
    }
    else if (per>=80&&per<=89)
    {
        printf("B grade");
    }
    else if (per>=70&&per<=79){
        printf("C grade");
    }
    else if (per>=60&&per<=69){
        printf("D Grade");
    }
    else if (per>=50&&per<=59)
    {
        printf("E Grade");
    }
    else 
    {
        printf("F grade");
    }
    return 0;
}
