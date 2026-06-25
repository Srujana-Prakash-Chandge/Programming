/// Accept String From User, Copy the Small Letters of that string into another string 
/// INPUT  : Srujana Prakash Chandge
/// OUTPUT : rujanarakashhandge

#include <stdio.h>


#include <stdio.h>

void StrCpySmall(char *src, char *dest)
{
   while(*src != '\0')
   {
    if((*src >= 'a') && (*src <= 'z'))
    {
        *dest = *src;
        dest++;
    }
    src++;
   }
   *dest = '\0';
}

int main()
{
    char arr[30];
    char brr[30];

    printf("Enter String : ");
    scanf("%[^\n]s", arr);

    StrCpySmall(arr, brr);

    printf("Copied String : %s\n", brr);

    return 0;
}