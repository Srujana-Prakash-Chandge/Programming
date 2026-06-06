///     Accept Number from User and Return Count of Digits Between 3 & 7
///     INPUT : 2395
///     OUTPUT : 1


#include<stdio.h>

int CountRange(int iNo)
{
   int iDigit = 0;
   int iCntRange = 0;

   if (iNo < 0){iNo = -iNo;}

    while(iNo > 0)
    {
        iDigit = iNo % 10;              //Extract the Last Digit 

        if(iDigit > 3 && iDigit < 7)    //Check for Condition (Range : 3 & 7)
        {
            iCntRange++;                // Counts how many times condition becomes true 
        }

        iNo = iNo / 10;                 //Removes last Digit and Sends NEW NUMBER for next iteration
    }

    return iCntRange;                   //Returns Count in the Range 3 & 7
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    iRet = CountRange(iValue);

    printf("The Count of Between 3 and 7 : %d\n", iRet);

    return 0;
}


////Time Complexity = O(N)
