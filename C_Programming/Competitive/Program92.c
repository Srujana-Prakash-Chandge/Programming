/// Accept Number of Rows and Columns from User and Display Below Pattern
/// INPUT  : iRow = 4, iCol=4
/// OUTPUT : A    B    C    D  
///          a    b    c    d
///          A    B    C    D 
///          a    b    c    d



#include<stdio.h>

void Pattern(int iRow, int iCol)
{
   int iCnt = 0, jCnt = 0;
   char cElement1 ='\0';
   char cElement2 ='\0';

   for(iCnt = 1;iCnt <= iRow; iCnt ++,cElement1++)
   {

      for(jCnt = 1, cElement2 = 'A', cElement1 = 'a'; jCnt <= iCol; jCnt++, cElement2++, cElement1++)
{
      if(iCnt % 2 != 0)
      {
         printf("%c \t", cElement2);
      }
      else{
         printf("%c \t", cElement1);
      }
     
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

