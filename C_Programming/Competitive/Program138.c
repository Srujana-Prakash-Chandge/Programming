/// Accept String From User and Accept one Character. Return index of First Occurence of that Character
/// INPUT  : Srujana Chandge   |    a
/// OUTPUT : First Index of your character : 4

#include <stdio.h>


int FirstChar(char *str, char ch)
{
    int iCount = 0;                  // Variable to store current index position

    while(*str != '\0')              // Traverse the string till end of string
    {
        if(*str == ch)               // Check whether current character matches input character
        {
            return iCount;           // Return index of first occurrence
        }

        iCount++;                    // Increment index counter
        str++;                       // Move pointer to next character
    }

    return -1;                       // Return -1 if character is not present
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
   
    printf("First Index of your character: %d", iRet);
   

  return 0;

   
}