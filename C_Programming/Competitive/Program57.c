///     Accept Number from User and Check Whether it Contains 0 in it or not
///     INPUT : 2395
///     OUTPUT : There is no Zero


#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo){

    int iDigit = 0;

    if(iNo<0){iNo = - iNo;}

    while(iNo>0)
    {
        iDigit = iNo % 10;      // Extracts the last digit

        if(iDigit == 0)         // Check Number has 0 or Not
        {
            return TRUE;
        }
        
        iNo = iNo / 10;         // Removes the last digit and updates number for next iteration
    }

}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Your Number : ");
    scanf("%d", &iValue);
    
    bRet = ChkZero(iValue);

    if(bRet==TRUE)
    {
        printf("It contains Zero");
    }
    else
    {
        printf("There is no Zero");
    }

    
    return 0;
}


////Time Complexity = O(N)
