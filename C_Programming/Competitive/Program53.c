///     Accept Range from User and Return the Addition of all Numbers in the Range (+ive only)
///     INPUT : 10    18
///     OUTPUT : 126


#include<stdio.h>

int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if(iStart < 0){iStart = - iStart; }
    if(iEnd < 0){iEnd = - iEnd; }
    
    while(iStart<=iEnd)
    {
        iSum = iSum + iStart;
        iStart++;
    }

        return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter Starting Point : ");
    scanf("%d", &iValue1);

    printf("Enter Ending Point : ");
    scanf("%d", &iValue2);

    iRet = RangeSum(iValue1, iValue2);

    printf("Addition is : %d", iRet);


    return 0;
}


////Time Complexity = O(N)
