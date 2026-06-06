///     Accept Number from User and Display all its Non-Factors
///     INPUT : 12
///     OUTPUT : 5  7   8   9   10  12


#include<stdio.h>

void NonFactors(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    printf("Non Factors are : \n");

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            printf("%d\t", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    NonFactors(iValue);

    return 0;
}

///Time Complexity = O(N)