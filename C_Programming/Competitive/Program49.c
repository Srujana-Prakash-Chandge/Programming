///     Convert Temperature in Fahrenheit to Celsius (1 C = (F -32) * (5/9))
///     INPUT : 10
///     OUTPUT : -12.2222 (10 - 32) * (5/9)


#include<stdio.h>

double FhToCs(float fTemp)
{
    if(fTemp < 0){fTemp = - fTemp; }

    return (fTemp - 32) * (5.0/9);

}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Temperature : ");
    scanf("%f", &fValue);

    dRet = FhToCs(fValue);

    printf("Temperature in Celsius : %lf\n", dRet);

    return 0;
}


////Time Complexity = O(1)
