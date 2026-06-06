///     Accept Range from User and Return the Addition of all Even Numbers in the Range (+ive only)
///     INPUT : 10    18
///     OUTPUT : 70


#include<stdio.h>

int RangeSumEven(int iStart, int iEnd){

    int iCnt = 0;
    int iSumEven = 0;

    if(iStart<0){iStart = - iStart;}
    if(iEnd<0){iEnd = - iEnd;}

    for(iCnt = iStart ; iCnt <= iEnd ; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iSumEven = iSumEven + iCnt;
        }
    }

    /*while(iStart<=iEnd){
       
        if(iStart % 2 == 0)
        {
            iSumEven = iSumEven + iStart;
           
        }
         iStart++;
    }*/


   
    return iSumEven;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter Starting Point : ");
    scanf("%d", &iValue1);

    printf("Enter Ending Point : ");
    scanf("%d", &iValue2);

    iRet = RangeSumEven(iValue1, iValue2);

    printf("Addition(Even Number) is : %d", iRet);


    return 0;
}


////Time Complexity = O(N)
