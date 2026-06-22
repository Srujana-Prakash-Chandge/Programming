/// Accept String From User and Count Number of White Spaces
/// INPUT  : Srujana Chandge
/// OUTPUT : 1

#include <stdio.h>


int CountWhiteSpaces(char *str)
{
   int iCount = 0;                        // Initialize counter to store the number of spaces

while(*str != '\0')                       // Traverse the string until the null character ('\0') is reached
{
    if(*str == ' ')                       // Check whether the current character is a space
    { 
        iCount++;                         // Increment the counter when a space is found
    } 
    
    str++;                                // Move pointer to the next character in the string
}  
   
return iCount;                            // Return the total number of spaces present in the string
  
}

int main(){

   char arr[20];
   int iRet = 0;
   printf("Enter your String \n");
   scanf("%[^'\n']s", arr);

   iRet = CountWhiteSpaces(arr);
   printf("White Spaces : %d", iRet);

  return 0;

   
}