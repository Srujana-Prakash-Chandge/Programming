///     Accept Number from User and Print Even Factors of that Number
///     INPUT : 36
///     OUTPUT : 2  4   6   12  18

#include<stdio.h>

void DisplayEvenFactor(int iNo)
{
    int i = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i <= iNo / 2; i++)
    {
        if((i % 2 == 0) && (iNo % i == 0))
        {
            printf("%d\t", i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    DisplayEvenFactor(iValue);

    return 0;
}