///     Accept Number N from User and Print all Odd Numbers upto N
///     INPUT : 18
///     OUTPUT : 1  3   5   7   9   11  13


#include<stdio.h>

void OddDisplay(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }


    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
      
        if(iCnt%2!=0)
        {
            printf("%d\t", iCnt);
        }
      
        
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    OddDisplay(iValue);

    return 0;
}


///Time Complexity = O(N)