/// Accept String From User and Toggle Case
/// INPUT  : Srujana
/// OUTPUT : sRUJANA

#include <stdio.h>


void ToggleCase(char *str)
{
   
   while(*str != '\0')
   {
      if(*str >= 'a' && *str <= 'z')
      {
          *str = *str - 32;
      }
      else if(*str >= 'A' && *str <= 'Z')
      {
             *str = *str + 32;
      }
      str++;
   }  
}

int main(){

   char arr[20];

   printf("Enter your String \n");
   scanf("%[^'\n']s", arr);

   ToggleCase(arr);
    printf("Modified String : %s", arr);

  return 0;

   
}