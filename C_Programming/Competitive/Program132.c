/// Accept String From User and Convert it into UpperCase
/// INPUT  : srujana
/// OUTPUT : SRUJANA

#include <stdio.h>


void ConvertCapital(char *str)
{
   
   while(*str != '\0')                     //Traverse the String Until Null Character
   {
      if(*str >= 'a' && *str <= 'z')       //Check for the LowerCase Char
      {*str = *str - 32;}                  //Current Character is Loercase (Letter a to z)
                                           //In ASCII, UpperCase Characters are 32 positions behind to LowerCase Char
                                           //Minus 32 in the Lowercase Char gives its Corresponding UpperCase Char
                                           // Example: 'a' (65) - 32 = 'A' (97)
                                           //          'b' (66) - 32 = 'B' (98)
      
   }

   str++;                                   // Move pointer to next character
}

int main(){

   char arr[20];

   printf("Enter your String \n");
   scanf("%[^'\n']s", arr);

   ConvertCapital(arr);
    printf("Modified String : %s", arr);

  return 0;

   
}