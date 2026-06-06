///     Accept Number from User and Display its Multiplication of Factors
///     INPUT : 4
///     OUTPUT : 4  8  12  16  20


#include<stdio.h>

int MultiFact(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    // Handle negative numbers
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if((iNo % iCnt) == 0)
        {
            iMult = iMult * iCnt;
        }
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    iRet = MultiFact(iValue);

    printf("Multiplication of factors is : %d\n", iRet);

    return 0;
}