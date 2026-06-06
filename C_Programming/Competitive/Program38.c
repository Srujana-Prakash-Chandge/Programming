///     Convert distance Km into M (1 km = 1000 m)
///     INPUT : 5
///     OUTPUT : 5000

#include<stdio.h>

int KmtoM(int iNo)
{
   double dMeter = 0.0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
   

    dMeter = iNo * 1000;

    return dMeter;
    
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Distance : ");
    scanf("%d", &iValue);

  

    iRet = KmtoM(iValue);

    printf("%d", iRet);

    return 0;
}


////Time Complexity = O(1)
