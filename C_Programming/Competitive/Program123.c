/// Accept Character from User and Check Whether it is a SmallCase or not (1-9)
/// INPUT  : s
/// OUTPUT : It is SmallCase
/// INPUT  : S
/// OUTPUT : It is not a SmallCase

#include <stdio.h>

void ChkAplha(char ch)
{

    if((ch >= 'A') && (ch <= 'Z') )
    {
        
        printf("%c ", ch + 32);
    }
   
    else if((ch >= 'a') && (ch <= 'z') )
    {
        printf("%c ", ch- 32);
    }
  
}

int main(){

    char cValue = '\0';

    printf("Enter the Character : \n");
    scanf("%c", &cValue);

    ChkAplha(cValue);

    
    return 0;

}