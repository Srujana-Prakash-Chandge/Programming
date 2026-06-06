///     Accept Number from User and Display its Table
///     INPUT : 2
///     OUTPUT : 2  4   6   8   10  12  14  16  18  20

#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0;
    int iMult = 0;
    // Convert negative number to positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

     for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        iMult = iMult + iNo;
        printf("%d\t", iMult);
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