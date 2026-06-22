/// Accept String From User and Convert it into LowerCase
/// INPUT  : SRUJana
/// OUTPUT : SRUJANA

#include <stdio.h>


void ConvertSmall(char *str)
{
   while(*str != '\0')                    //Traverse String util Null Character
   {
    if(*str >= 'A' && *str <= 'Z')        // Check if Current Character is UpperCase
    {
         *str = *str + 32;                //Current Character is UpperCase (Letter A to Z)
                                          //In ASCII, LowerCase Characters are 32 positions ahead of UpperCase Char
                                          //Adding 32 in the UpperCase Char gives its Corresponding LowerCase Char
                                          // Example: 'A' (65) + 32 = 'a' (97)
                                          //          'B' (66) + 32 = 'b' (98)
    }
                                     
    str++;                                // Move pointer to next character
   }

}

int main(){

   char arr[20];

   printf("Enter your String \n");
   scanf("%[^'\n']s", arr);

   ConvertSmall(arr);
    printf("Modified String : %s", arr);

  return 0;

   
}