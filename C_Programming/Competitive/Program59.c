///     Accept Number from User and Count Frequency of 4 in it
///     INPUT : 2395
///     OUTPUT : 1


#include<stdio.h>


int CountFour(int iNo){

    int iDigit = 0;
    int iChkFour = 0;

    if(iNo < 0){iNo = -iNo;}

    while(iNo > 0)
    {
        iDigit = iNo % 10;              // Extracts the last digit

        if(iDigit == 4)                 //Check for Condition
        {
            iChkFour = iChkFour + 1;    // Counts how many times condition becomes true   (DOES NOT RUNS THE LOOP)
        }

        iNo = iNo / 10;                 // Removes the last digit and updates number for next iteration
    }
    return iChkFour;
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Your Number : ");
    scanf("%d", &iValue);
    
    iRet = CountFour(iValue);
    printf("Frequency of 4 in your Number : %d", iRet);


    
    return 0;
}


////Time Complexity = O(N)
