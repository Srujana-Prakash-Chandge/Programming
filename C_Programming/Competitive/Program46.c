///     Accept Radius from User and Calculate Area of Circle and Print the Same
///     INPUT : 5.3
///     OUTPUT : 88.2026


#include<stdio.h>

double CircleArea(float fRadius)
{
    

    double dArea = 0;
    const double PI = 3.14;

    if(fRadius < 0){
        fRadius = - fRadius;
    }

    dArea = PI * fRadius * fRadius;

    return dArea;


}
 


int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Radius : ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area if Circle : %lf\n", dRet);

    return 0;
}


////Time Complexity = O(1)
