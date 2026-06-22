/// Accept String From User and Count Number of Small Characters in it 
/// INPUT  : Jay Ganesh
/// OUTPUT : Capital Character Count: 7


#include <stdio.h>

int CountSmall(char *str)
{
    int iCnt = 0;
    while(*str != '\0')                      //Traverse the String Until Null Character '\0' is reached
    {
        if(*str >= 'a' && *str <= 'z')       // Check for the Small Case Character
        {
            iCnt++;                          // As Small Case Char is found, add the count in iCnt
        }

        str++;                               // Move pointer to the next character in the string
    }
    return iCnt;                             // Return the iCnt (Total Count of Small Case Char found and stored in iCnt)
}

int main(){

   char arr[20];
   int iRet = 0;

   printf("Enter your String \n");
   scanf("%[^'\n']s", arr);

   iRet = CountSmall(arr);

   printf("Small Character Count :%d",iRet);
    
   return 0;
}