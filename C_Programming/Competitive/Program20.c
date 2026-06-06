///     Accept Number from User and Return Difference between Summation of all its Factors and Non-Factors
///     INPUT : 12
///     OUTPUT : -34  (16-50)


#include<stdio.h>

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum1 = 0;
    int iSum2 = 0;
    int iDiff = 0;

    

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iSum1 = iSum1 + iCnt;
        }
       
    }

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum2 = iSum2 + iCnt;
        }
       
    }


    iDiff = iSum2-iSum1;
    return iDiff;


}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    iRet = SumNonFact(iValue);

    printf("%d", iRet);

    return 0;
}


///Time Complexity = O(N)