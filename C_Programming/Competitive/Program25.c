///     Accept Number N from User and Print its First 5 Multiples
///     INPUT : 4
///     OUTPUT : 4  8  12  16  20

#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }


    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
      
      
       printf("%d\t", iCnt * iNo);
           
       
        
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    MultipleDisplay(iValue);

    return 0;
}


///Time Complexity = O(1)  
//Because the loop runs a fixed number of times. The number of iterations does not depend on N (iNo). So the execution time is constant.