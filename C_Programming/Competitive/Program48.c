///     Convert distance Km into M (1 km = 1000 m)
///     INPUT : 5
///     OUTPUT : 5000


#include<stdio.h>

int KmToM(int iNo)
{
    int iConvert  = 0;

    if(iNo < 0){iNo = - iNo; }

    iConvert = iNo * 1000;

    return iConvert;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Distance : ");
    scanf("%d", &iValue);


    iRet = KmToM(iValue);

    printf("Distance in Meters : %d\n", iRet);

    return 0;
}


////Time Complexity = O(1)
