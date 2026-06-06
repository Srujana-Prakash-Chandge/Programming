///     Odd Factorial of Given Number 
///     INPUT : 5
///     OUTPUT : 15  (5 * 3 * 1)

#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt ++)
    {
        if(iCnt%2!=0)
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

    iRet = EvenFactorial(iValue);

    printf("%d", iRet);

    return 0;
}


////Time Complexity = O(N)
