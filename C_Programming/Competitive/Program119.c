/// Accept Character from User and Check Whether it is a SmallCase or not (1-9)
/// INPUT  : s
/// OUTPUT : It is SmallCase
/// INPUT  : S
/// OUTPUT : It is not a SmallCase

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAplha(char ch)
{


    if((ch >= 'a') && (ch <= 'z'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main(){

    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the Character : \n");
    scanf("%c", &cValue);

    bRet = ChkAplha(cValue);

    if(bRet == TRUE)
    {
        printf("It is SmallCase");
    }
    else{
        printf("It is not a SmallCase");
    }


    return 0;

}