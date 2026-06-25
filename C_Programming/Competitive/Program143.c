/// Accept String From User, Copy the Capital Letters of that string into another string 
/// INPUT  : Srujana Prakash Chandge
/// OUTPUT : SPC

#include <stdio.h>


#include <stdio.h>

void StrCpyCap(char *src, char *dest)
{
   while(*src != '\0')                      // Traverse the source string till end
{
    if((*src >= 'A') && (*src <= 'Z'))      // Check whether current character is capital
    {
        *dest = *src;                       // Copy capital character to destination string
        dest++;                             // Move destination pointer to next position       (Moves only when the Letter is capital, because we want only capital letter in this String)
    }

    src++;                                  // Move source pointer to next character
}

*dest = '\0';                               // Add null character to terminate destination string
}

int main()
{
    char arr[30];
    char brr[30];

    printf("Enter String : ");
    scanf("%[^\n]s", arr);

    StrCpyCap(arr, brr);

    printf("Copied String : %s\n", brr);

    return 0;
}