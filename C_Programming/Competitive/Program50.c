///     Convert Area in Square Feet to Square Meter (1 sq = 0.0929 sm)
///     INPUT : 5
///     OUTPUT : 0.464515


#include<stdio.h>

double SquareMeter(int iValue)
{
    if(iValue < 0){iValue = - iValue; }
    
    return (iValue * 0.092903);

}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter Temperature : ");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Temperature in Celsius : %lf\n", dRet);

    return 0;
}


////Time Complexity = O(1)
