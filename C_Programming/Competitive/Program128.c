/// Accept String From User and return Difference Between Number of Small Characters and Number of Capital Character in it 
/// INPUT  : Jay Ganesh
/// OUTPUT : Capital Character Count: 5


#include <stdio.h>

int Difference(char *str)
{
    int iCntSmall = 0, iCntCap = 0, iDiff = 0;
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCntSmall++;
        }
        else if(*str >= 'A' && *str <= 'Z')
        {
            iCntCap++;
        }
       

        str++;
    }
  iDiff = iCntSmall - iCntCap;
  return iDiff;
}

int main(){

   char arr[20];
   int iRet = 0;

   printf("Enter your String \n");
   scanf("%[^'\n']s", arr);

   iRet = Difference(arr);

   printf("Difference :%d",iRet);

   return 0;
}