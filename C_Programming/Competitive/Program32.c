///     Convert US Dollar to INR  (1 $ = 70 Rs)
///     INPUT : 10
///     OUTPUT : 700

#include<stdio.h>

int DollartoInr(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iCnt = 70 * iNo;
    return iCnt ;
        
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    iRet = DollartoInr(iValue);

    printf("%d", iRet);

    return 0;
}


////Time Complexity = O(1)
