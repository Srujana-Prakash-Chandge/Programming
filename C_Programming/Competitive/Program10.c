///     Accept Number from User and Check wheater its Even or Odd 
///     INPUT : 6
///     OUTPUT : Its even



#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckEven(int iNo)
{
if(iNo % 2 == 0)
{
   return TRUE;
}

else{
    return FALSE;
}
}

int main(){
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number:");
    scanf("%d", &iValue);

    bRet = CheckEven (iValue);

    if(bRet == TRUE)
{
   printf("Its even");
}

else{
    printf("Its odd");
}

    return 0;
}