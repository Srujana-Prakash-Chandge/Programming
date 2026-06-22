/// Accept String From User and Display it in Reverse Order
/// INPUT  : Srujana
/// OUTPUT : anajurS

#include <stdio.h>


void Reverse(char *str)
{
    
  char *start = str;                // Store the base address (starting address) of the string

                                    // Example:
                                    // String = "Srujana"
                                    //
                                    // Address   Character
                                    // 1000      S
                                    // 1001      r
                                    // 1002      u
                                    // 1003      j
                                    // 1004      a
                                    // 1005      n
                                    // 1006      a
                                    // 1007      \0
                                    //
                                    // start = 1000
                                    // str   = 1000

while(*str != '\0')                 // Traverse the string until the null character is found
{
    str++;                          // Move pointer to the next character
}

                                    // After loop:
                                    //
                                    // str = 1007
                                    // *str = '\0'

str--;                              // Move one position back to point to the last character

                                    // Now:
                                    //
                                    // str = 1006
                                    // *str = 'a'

while(str >= start)                 // Continue until the pointer reaches the starting address 
                                    // Also can be seen as : while (1006 > 1000)
                                    // As we are comparing their Base Addresses

{
    printf("%c", *str);             // Print the character currently pointed to by str

                                    // Iteration-wise:
                                    //
                                    // str = 1006 -> prints 'a'
                                    // str = 1005 -> prints 'n'
                                    // str = 1004 -> prints 'a'
                                    // str = 1003 -> prints 'j'
                                    // str = 1002 -> prints 'u'
                                    // str = 1001 -> prints 'r'
                                    // str = 1000 -> prints 'S'

    str--;                          // Move pointer one position backward
}

                                    // After printing 'S':
                                    //
                                    // str = 999
                                    //
                                    // Condition:
                                    // str >= start
                                    // 999 >= 1000 -> FALSE
                                    //
                                    // Loop terminates

                                    // Final Output:
                                    // anajurS

}

int main(){

   char arr[20];

   printf("Enter your String \n");
   scanf("%[^'\n']s", arr);

   Reverse(arr);

  return 0;

   
}