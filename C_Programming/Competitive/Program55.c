///     Accept Range from User and Display that Numbers in that Range in Reverse Order
///     INPUT : 10    18
///     OUTPUT : 18  17  16  15  14  13  12  11  10


#include<stdio.h>

void rangeDisplayRev(int iStart, int iEnd){

    int iCnt = 0;

    if(iStart<0){iStart = - iStart;}
    if(iEnd<0){iEnd = - iEnd;}

    /*for(iCnt = iEnd ; iCnt >= iStart ; iCnt--)
    {
       printf("%d\t",iCnt);
    }*/

    while(iEnd>=iStart)
    {
        printf("%d\t",iEnd);
        iEnd--;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Starting Point : ");
    scanf("%d", &iValue1);

    printf("Enter Ending Point : ");
    scanf("%d", &iValue2);

  rangeDisplayRev(iValue1, iValue2);



    return 0;
}


////Time Complexity = O(N)
