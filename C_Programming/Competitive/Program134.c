/// Accept String From User and Display only Digits Present in in
/// INPUT  : Srujana123
/// OUTPUT : 123

#include <stdio.h>


void DisplayDigits(char *str)
{

  while(*str != '\0')                           // Traverse the string until the null character ('\0') is reached
{
    if(*str >= '0' && *str <= '9')              // Check whether the current character is a digit (0 to 9)
    {
        printf("Digits in String: %c", *str);   // Display the digit present in the string
    }

    str++;                                      // Move the pointer to the next character in the string
}
  
}

int main(){

   char arr[20];

   printf("Enter your String \n");
   scanf("%[^'\n']s", arr);

   DisplayDigits(arr);
    //printf("Modified String : %s", arr);

  return 0;

   
}