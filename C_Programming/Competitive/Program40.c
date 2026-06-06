///     Convert Area in Square Feet to Square Meter (1 sq = 0.0929 sm)
///     INPUT : 5
///     OUTPUT : 0.464515


#include<stdio.h>

double SquareMeter(double dNo)
{
    if(dNo < 0)
    {dNo = -dNo;}

    return dNo * 0.092903;
}

int main()
{
    double dValue = 0.0;
    double dRet = 0.0;

    printf("Enter Area in Square Feet : ");
    scanf("%lf", &dValue);

    dRet = SquareMeter(dValue);

    printf("%lf\n", dRet);

    return 0;
}


////Time Complexity = O(1)
