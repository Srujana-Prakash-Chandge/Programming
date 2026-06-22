/// Accept Character from User and Check Whether it is a SmallCase or not (1-9)
/// INPUT  : s
/// OUTPUT : It is SmallCase
/// INPUT  : S
/// OUTPUT : It is not a SmallCase

#include <stdio.h>

void ChkAplha(char ch)
{


    if((ch == 'A') )
    {
        printf("Exam Timing : 7 AM");
    }
    else if(ch == 'B')
    {
        printf("Exam Timing : 8:30 AM");
    }
     else if(ch == 'C')
    {
        printf("Exam Timing : 9:20 AM");
    }
     else if(ch == 'D')
    {
        printf("Exam Timing : 10:30 AM");
    }
    else
    {
        printf("Dont come to Exam");
    }
}

int main(){

    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the Character : \n");
    scanf("%c", &cValue);

    ChkAplha(cValue);

    
    return 0;

}