/// Accept Character from User and Check Whether it is a Capital or not (A-Z)
/// INPUT  : F
/// OUTPUT : It is Capital
/// INPUT  : f
/// OUTPUT : It is not a Capital

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAplha(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
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
        printf("It is Capital");
    }
    else{
        printf("It is not a Capital");
    }


    return 0;

}