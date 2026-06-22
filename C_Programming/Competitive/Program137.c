/// Accept String From User and Accept one Character. Return Frequency of that Character
/// INPUT  : Srujana Chandge   |    a
/// OUTPUT : Frequency of your character : 3

#include <stdio.h>


int CheckChar(char *str, char ch)
{

     int iCount = 0;
     while(*str != '\0')                       // Traverse the string until the null character ('\0') is reached
     {
          if(*str == ch)                       //Check for the character stored in variable "ch"
          {                      
               iCount++;                       //If Found add the count of it in iCount 
          } 
    
          str++;                               // Move pointer to the next character in the string
     }  
   
return iCount;                                 // Return iCount
}

int main(){

   char arr[20];
   char cValue;
   int iRet = 0; 

   printf("Enter your String \n");
   scanf("%[^'\n']s", arr);

   printf("Enter the Character: \n");
   scanf(" %c", &cValue);

   iRet = CheckChar(arr, cValue);
   
    printf("Frequency of your Character: %d", iRet);
   

  return 0;

   
}