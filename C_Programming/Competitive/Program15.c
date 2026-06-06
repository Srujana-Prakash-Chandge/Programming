///     Accept one Character from User and Check it's Vowel or not
///     INPUT : E
///     OUTPUT : TRUE

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char iCh)
{
    if((iCh == 'a') || (iCh == 'e') || (iCh == 'i') || 
       (iCh == 'o') || (iCh == 'u') ||
       (iCh == 'A') || (iCh == 'E') || (iCh == 'I') || 
       (iCh == 'O') || (iCh == 'U'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character : ");
    scanf("%c", &cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not a Vowel");
    }

    return 0;
}