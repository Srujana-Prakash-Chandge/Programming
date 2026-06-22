/// Accept String From User and Count Number of Capital Characters in it 
/// INPUT  : Jay Ganesh
/// OUTPUT : Capital Character Count: 2


#include <stdio.h>

int CountCaptl(char *str)
{
    int iCnt = 0;
    while(*str != '\0')                      //Traverse the String Until Null Character '\0' is reached
    {
        if(*str >= 'A' && *str <= 'Z')       // Check for the Capital Character
        {
            iCnt++;                          // As Capital Char is found, add the count in iCnt
        }

        str++;                               // Move pointer to the next character in the string
    }
    return iCnt;                             // Return the iCnt (Total Count of Captial Char found and stored in iCnt)
}

int main(){

   char arr[20];
   int iRet = 0;

   printf("Enter your String \n");
   scanf("%[^'\n']s", arr);

   iRet = CountCaptl(arr);

   printf("Capital Character Count :%d",iRet);

    return 0;
}