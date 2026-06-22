/// Accept String From User and Accept one Character. Check Whether the Character is present in it or not
/// INPUT  : Srujana Chandge   |    e
/// OUTPUT : It is Present

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckChar(char *str, char ch)
{

     while(*str != '\0')                       // Traverse the string until the null character ('\0') is reached
     {
          if(*str == ch)                       //Check for the character stored in variable "ch"
          {                      
               return TRUE;                    //If found Return TRUE
          } 
    
          str++;                                // Move pointer to the next character in the string
     }  
   
return FALSE;                              
}

int main(){

   char arr[20];
   char cValue;
   BOOL bRet = FALSE;

   printf("Enter your String \n");
   scanf("%[^'\n']s", arr);

   printf("Enter the Character: \n");
   scanf(" %c", &cValue);

   bRet = CheckChar(arr, cValue);
   if(bRet == TRUE)
   {
        printf("Hurray!! Your Character is Present");
   }
   else
   {
        printf("oops!!\tYour Character is Absent");
   }
   

  return 0;

   
}