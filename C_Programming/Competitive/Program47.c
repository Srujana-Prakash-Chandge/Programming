///     Accept Width & Height from User and Calculate Area of Rectangle and Print the Same 
///     INPUT : 5.3  9.78
///     OUTPUT : 51.834


#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
    double dArea = 0;
    

    if(fWidth < 0){
        fWidth = - fWidth;
    }

      if(fHeight < 0){
        fHeight = - fHeight;
    }

    dArea = fWidth * fHeight;

    return dArea;


}
 


int main()
{
    float fValue1 = 0.0 , fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter Width : ");
    scanf("%f", &fValue1);


    printf("Enter Height : ");
    scanf("%f", &fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area if Rectangle : %lf\n", dRet);

    return 0;
}


////Time Complexity = O(1)
