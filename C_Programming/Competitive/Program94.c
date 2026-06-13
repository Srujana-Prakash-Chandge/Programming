/// Accept Number of Rows and Columns from User and Display Below Pattern
/// INPUT  : iRow = 3, iCol=4
/// OUTPUT : 4    4    4    4    4 
///          3    3    3    3    3
///          2    2    2    2    2
///          1    1    1    1    1





#include<stdio.h>

void Pattern(int iRow, int iCol)
{
   int iCnt = 0, jCnt = 0;

   for(iCnt = iRow;iCnt >= 1; iCnt --)
   {

      for(jCnt = 1; jCnt <= iCol; jCnt++)
   {
     
         printf("%d \t",iCnt);
     
     
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

