///     Accept Number from User and Display Table in Reverse order
///     INPUT : 2
///     OUTPUT : 20 18  16  14  10  8   6   4  2

#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0;
    // Convert negative number to positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

     for(iCnt = 10; iCnt >= 1; iCnt--)
    {
       
        printf("%d\t", iCnt * iNo);
    }

   
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    Table(iValue);


    return 0;
}

// Time Complexity = O(N)