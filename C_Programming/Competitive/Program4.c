///     Accept Number from User and Check Whether it is Divisible by 5 or not
///     INPUT : 15
///     OUTPUT : Dividible by 5

#include <stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

int Check (int iNo)
{
    if((iNo % 5) == 0)
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

    bRet = Check(iValue);
    if(bRet == TRUE)
    {
        printf("Dividible by 5");
    }
    else{
        printf("Not Divisible by 5");
    }

    return 0;

}
