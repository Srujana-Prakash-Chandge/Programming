/// Accept String From User, Copy the contents of that string into another string (strcpy())
/// INPUT  : Srujana
/// OUTPUT : Srujana

#include <stdio.h>


#include <stdio.h>

void StrCpyX(char *src, char *dest)
{
    while(*src != '\0')
    {
        *dest = *src;   // Copy data
        src++;          // Move source pointer
        dest++;         // Move destination pointer
    }

    *dest = '\0';   // End the destination string
}

int main()
{
    char arr[30];
    char brr[30];

    printf("Enter String : ");
    scanf("%s", arr);

    StrCpyX(arr, brr);

    printf("Copied String : %s\n", brr);

    return 0;
}