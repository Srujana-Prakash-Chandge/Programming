///     Difference between Even Factorial & Odd Factorial of Given Number 
///     INPUT : 5
///     OUTPUT : -7  (8 - 15)

#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iMult1 = 1;
    int iMult2 = 1;
    int iDiff = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    ///For odd
    for(iCnt = 1; iCnt <= iNo; iCnt += 2)
    {
       
            iMult1 = iMult1 * iCnt;
    }

    ///For even
    for(iCnt = 2; iCnt <= iNo; iCnt += 2)
    {
       
            iMult2 = iMult2 * iCnt;
    }
       
        
    
        return iDiff = iMult2 - iMult1;
    
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
////Both loops runs N/2 times