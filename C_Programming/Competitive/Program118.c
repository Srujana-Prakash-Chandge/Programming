/// Accept Character from User and Check Whether it is a Digit or not (1-9)
/// INPUT  : 5
/// OUTPUT : It is Digit
/// INPUT  : f
/// OUTPUT : It is not a Digit

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAplha(char ch)
{


    if((ch >= '0') && (ch <= '9'))
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
        printf("It is Digit");
    }
    else{
        printf("It is not a Digit");
    }


    return 0;

}