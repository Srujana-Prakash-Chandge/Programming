///     Accept Number from User and Display its factors in Decreasing Order
///     INPUT : 4
///     OUTPUT : 4  8  12  16  20


#include<stdio.h>

void FactRev(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    printf("Factors in reverse order are : \n");

    for(iCnt = iNo / 2; iCnt >= 1; iCnt--)
    {
        if((iNo % iCnt) == 0)
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

    FactRev(iValue);

    return 0;
}



///Time Complexity = O(N)