/// Accept Number of Rows and Columns from User and Display Below Pattern
/// INPUT  : iRow = 3, iCol=5
/// OUTPUT : 5    4    3    2    1
///          5    4    3    2    1
///          5    4    3    2    1



#include<stdio.h>

void Pattern(int iRow, int iCol)
{
   int iCnt =0, jCnt = 0;
   for(iCnt = 1; iCnt <= iRow; iCnt ++)            //Outer Loop for Rows
   {
      for(jCnt = iCol ; jCnt >= 1; jCnt--)         //Inner Loop for Columns
      {
         printf("%d \t", jCnt);                    //Print Column Number (5,4,...,iCol)
      }
      printf("\n");                                //Move Cursor to Next Row
   }
}

int main()
{
   int iValue1 = 0, iValue2 = 0;
   printf("Enter Number of Rows and Columns :");
   scanf("%d %d", &iValue1, &iValue2);
   Pattern(iValue1, iValue2);
}

