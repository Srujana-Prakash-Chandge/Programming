/// Accept Number from User and Display Below Pattern
/// INPUT  : 5
/// OUTPUT : 5  #  4  #  3  #  2  #  1  #

#include<stdio.h>

void Pattern(int iNo)
{
   int iCnt = 0;
   for(iCnt = iNo; iCnt >= 1 ; iCnt--)
   {
      printf("%d \t # \t", iCnt);
   }
}

int main()
{
   int iValue = 0;
   printf("Enter the Number of Elements :");
   scanf("%d", &iValue);
   Pattern(iValue);
   return 0;
}