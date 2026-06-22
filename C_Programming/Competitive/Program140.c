/// Accept String From User Reverse the String in Place
/// INPUT  : Srujana
/// OUTPUT : anajurS

#include <stdio.h>


void StringReverse(char *str)
{
                
    char *start = str;
    char temp = '\0';

    while(*str != '\0')
    {
        str++;
    }

    str--;

    while(start < str)      // Continue until both pointers meet
    {
        temp = *start;      // Store first character

        *start = *str;      // Copy last character to first position

        *str = temp;        // Copy stored character to last position

        start++;            // Move forward from beginning

        str--;              // Move backward from end
    }
}

int main(){

   char arr[20];
   char cValue;
   int iRet = 0; 

   printf("Enter your String \n");
   scanf("%[^'\n']s", arr);

  

   StringReverse(arr);
   printf("Modified String: %s\n", arr);
   
   

  return 0;

   
}