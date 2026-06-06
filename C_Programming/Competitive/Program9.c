///     Accept 2 Numbers from User and Display 1st Number in 2nd Number of Times
///     INPUT : 12  5
///     OUTPUT : 12  12  12  12  12


#include <stdio.h>

void Display(int iNo, int iFrequency)
{
    int iNum = 0;

    if(iFrequency < 0)
    {
        iFrequency = -iFrequency;
    }

    for(iNum = 1; iNum <= iFrequency; iNum++)
    {
        printf("%d\t", iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    printf("Enter Frequency: ");
    scanf("%d", &iCount);

    Display(iValue, iCount);

    return 0;
}