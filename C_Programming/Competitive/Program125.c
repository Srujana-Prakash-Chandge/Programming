/// Accept Character from User and Display Decimal  Octal  HexaDecimal
/// INPUT  : s
/// OUTPUT : It is special character
/// INPUT  : S
/// OUTPUT : It is not a special character

#include <stdio.h>

void ChkAplha(char ch)
{

    printf("Decimal  Octal  HexaDecimal \n");
    printf("%d\t %o\t %X\t\n", ch, ch, ch);
   
}

int main(){

    char cValue = '\0';

    printf("Enter the Character : \n");
    scanf("%c", &cValue);

    ChkAplha(cValue);

    
    return 0;

}