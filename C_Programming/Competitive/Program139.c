/// Accept String From User and Accept one Character. Return index of Last Occurence of that Character
/// INPUT  : Srujana Chandge   |    a
/// OUTPUT : Last Index of your character : 10

#include <stdio.h>


int FirstChar(char *str, char ch)
{
   int iIndex = 0;
   int iPosition = -1;

    while(*str != '\0')              // Traverse the string till end of string
    {
        if(*str == ch)               // Check whether current character matches input character
        {
                iPosition = iIndex    ;   
        }

            iIndex++;       
        str++;                       // Move pointer to next character
    }

    return iPosition;                       
}

int main(){

   char arr[20];
   char cValue;
   int iRet = 0; 

   printf("Enter your String \n");
   scanf("%[^'\n']s", arr);

   printf("Enter the Character: \n");
   scanf(" %c", &cValue);

   iRet = FirstChar(arr, cValue);
   
    printf("Last Index of your character: %d", iRet);
   

  return 0;

   
}