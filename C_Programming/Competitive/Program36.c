///     Calculate Area of Circle
///     INPUT : 5.3
///     OUTPUT : 88.2026

#include<stdio.h>

double CircleArea(float fRadius)
{
   double dArea = 0.0;

    if(fRadius < 0)
    {
        fRadius = -fRadius;
    }

    dArea = 3.14 * fRadius * fRadius;

        
    
        return dArea;
    
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Radius : ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("%lf", dRet);

    return 0;
}

////Time Complexity = O(1)
