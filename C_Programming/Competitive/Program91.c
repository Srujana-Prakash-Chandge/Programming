/// Accept Number of Rows and Columns from User and Display Below Pattern
/// INPUT  : iRow = 3, iCol=4
/// OUTPUT : A    B    C    D  
///          A    B    C    D 
///          A    B    C    D 
///          A    B    C    D 



#include<stdio.h>

void Pattern(int iRow, int iCol)
{
   int iCnt = 0, jCnt = 0;
   char cElement ='\0';

   for(iCnt = 0;iCnt <= iRow; iCnt ++)
   {
      for(jCnt = 0, cElement = 'A'; jCnt <= iCol; jCnt++, cElement++)
      {
         printf("%c \t", cElement);
      }
      printf("\n");
   }

         
   }


int main()
{
   int iValue1 = 0, iValue2 = 0;
   printf("Enter Number of Rows and Columns :");
   scanf("%d %d", &iValue1, &iValue2);
   Pattern(iValue1, iValue2);
}

