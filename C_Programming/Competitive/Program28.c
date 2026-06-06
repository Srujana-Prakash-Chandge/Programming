///     Accept Number from User and find its Factorial
///     INPUT : 5
///     OUTPUT : 120 (5 * 4 * 3 * 2 * 1)

#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int iMult = 1;
    // Convert negative number to positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

     for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
       
        
            iMult = iMult * iCnt;
        
    }

    return iMult;
   
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial of your given number is : %d", iRet);

    return 0;
}

// Time Complexity = O(N)