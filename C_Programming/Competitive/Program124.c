/// Accept Character from User and Check Whether it is a Special Character or not (1-9)
/// INPUT  : s
/// OUTPUT : It is special character
/// INPUT  : S
/// OUTPUT : It is not a special character

#include <stdio.h>

void ChkAplha(char ch)
{

    if((ch == '!') || (ch == '@')|| (ch == '#')|| (ch == '$')|| (ch == '%')|| (ch == '^')|| (ch == '&')|| (ch == '*')  )
    {
        
        printf("It is a special character");
    }
   
    else
    {
        printf("It is not a special character");
    }
  
}

int main(){

    char cValue = '\0';

    printf("Enter the Character : \n");
    scanf("%c", &cValue);

    ChkAplha(cValue);

    
    return 0;

}