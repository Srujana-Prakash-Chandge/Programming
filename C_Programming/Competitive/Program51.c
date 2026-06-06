///     Accept Range from User and Display all Numbers in that Range
///     INPUT : 10      18
///     OUTPUT : 10 11  12  13  14  15  16  17  18


#include<stdio.h>

void RangeDisplay(int iStart, int iEnd)
{
    int iCnt = 0;
    if(iStart < 0){iStart = - iStart; }
    if(iEnd < 0){iEnd = - iEnd; }
    
    for(iCnt = iStart ; iCnt <= iEnd ; iCnt++)
        {
            printf("%d\t",iCnt);
        }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Starting Point : ");
    scanf("%d", &iValue1);

    printf("Enter Ending Point : ");
    scanf("%d", &iValue2);

    RangeDisplay(iValue1, iValue2);


    return 0;
}


////Time Complexity = O(N)
