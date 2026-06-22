/// Accept Character from User and Check Whether it is a SmallCase or not (1-9)
/// INPUT  : s
/// OUTPUT : It is SmallCase
/// INPUT  : S
/// OUTPUT : It is not a SmallCase

#include <stdio.h>

void ChkAplha(char ch)
{

int i = 0;
    if((ch >= 'A') && (ch <= 'Z') )
    {
        for(i = ch; i<= 'Z' ; i++)
        {
            printf("%c", i);
        }
        
    }
   
    else if((ch >= 'a') && (ch <= 'z') )
    {
        for(i = ch; i>= 'a' ; i--)
        {
            printf("%c", i);
        }
    }
    else
    {
        return;
    }
}

int main(){

    char cValue = '\0';

    printf("Enter the Character : \n");
    scanf("%c", &cValue);

    ChkAplha(cValue);

    
    return 0;

}