///     Accept Number from User and Return Count of Even Digits
///     INPUT : 1018
///     OUTPUT : 2


#include<stdio.h>

int CountOdd(int iNo)
{
    int iDigit = 0;
    int iCheckOdd = 0;
    
    if(iNo < 0){iNo = -iNo;}

    while (iNo > 0)
    {
        iDigit = iNo % 10;      // Extracts the last Digit
        
        if(iDigit % 2 != 0)     //Check Odd
        {
            iCheckOdd ++;       // If odd then stores the count of it
        }

        iNo = iNo / 10;         // Removes the last Digit from the Number
                                //Runs the loop (like iCnt++ of a)
    }
        return iCheckOdd;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    iRet = CountOdd(iValue);

    printf("The Count of Odd Digits : %d\n", iRet);

    return 0;
}


////Time Complexity = O(N)
