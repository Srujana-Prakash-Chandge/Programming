///     Accept Number from User and Return Difference Between Sum of Even Digits and Sum of Odd Digits
///     INPUT : 2395
///     OUTPUT : -15 (2 - 7)


#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iEvenCount = 0;
    int iOddCount = 0;
    int iDiff = 0;

    if(iNo < 0){iNo = -iNo;}

    while(iNo > 0)
    { 
        iDigit = iNo % 10;

        if(iDigit % 2 == 0)                      // Extracts the last digit
        {
            iEvenCount = iEvenCount + iDigit;    //Performs Addition of Even Numbers
        }
        else
        {
            iOddCount = iOddCount + iDigit;      //Performs Addition of Odd Numbers
        }

        iNo = iNo / 10;                          // Removes the last digit and updates number for next iteration
    }

    iDiff = iEvenCount - iOddCount;              //Performs Division of Even & Odd Numbers
    return iDiff;                                // Returns final Division
}
 


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    iRet = CountDiff(iValue);

    printf("Difference : %d\n", iRet);

    return 0;
}


////Time Complexity = O(N)
