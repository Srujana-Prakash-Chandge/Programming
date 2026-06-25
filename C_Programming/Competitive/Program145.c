/// Accept 2 String From User, Concat Second String After First String (strcat()) 
/// INPUT  : Srujana |  Prakash Chandge
/// OUTPUT : Srujana Prakash Chandge

#include <stdio.h>


void StrCpySmall(char *src, char *dest)
{
  while(*src != '\0')        // Traverse first string till its end
{
    src++;
}

*src = ' ';                  // Insert a space after first string
src++;                       // Move pointer to next position

while(*dest != '\0')         // Traverse second string
{
    *src = *dest;            // Copy character from second string
    dest++;                  // Move source (second string) pointer
    src++;                   // Move destination pointer
}

*src = '\0';                 // Place null character after the last copied character to terminate the string
                             // to mark: "This string ends here."
                             // printf() prints characters until it finds a '\0'.
                             // If there is no '\0', printf() keeps reading:
                             // Srujana PrakashXYZ@#... or may even crash because it reads beyond valid memory.


}

int main()
{
    char arr[50];
    char brr[30];

    printf("Enter First String : ");
    scanf(" %[^\n]", arr);


    printf("Enter Second String : ");
    scanf(" %[^\n]", brr);

    StrCpySmall(arr, brr);

    printf("Whole String : %s\n", arr);

    return 0;
}