/// Accept String From User and Check Whether it Contains Vowel or not
/// INPUT  : Jay Ganesh
/// OUTPUT : It has Vowels


#include <stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char *str)
{
    
    while(*str != '\0')
    {
        if(*str == 'a' || *str == 'e'|| *str == 'i'|| *str == 'o'|| *str == 'u'
        || *str == 'A' || *str == 'E'|| *str == 'I'|| *str == 'O'|| *str == 'U')
        {
           return TRUE;
        }
       
       

        str++;
    }
            return FALSE;

}

int main(){

   char arr[20];
   BOOL bRet = FALSE;

   printf("Enter your String \n");
   scanf("%[^'\n']s", arr);

   bRet = ChkVowel(arr);

   if(bRet == TRUE)
    {
    printf("It has Vowels");
    }
    else
    {
         printf("It has no Vowels");
    }

    return 0;
   
}