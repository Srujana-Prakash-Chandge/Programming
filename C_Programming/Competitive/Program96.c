/// Accept Number of Rows and Columns from User and Display Below Pattern
/// INPUT  : iRow = 5, iCol=4
/// OUTPUT : 1    2    3    4    
///          5    6    7    8 
///          9    1    2    3
///          4    5    6    7







#include<stdio.h>

void Pattern(int iRow, int iCol)
{
   int iCnt = 0, jCnt = 0 , iNumCnt = 0;

   for(iCnt = 1;iCnt <= iRow; iCnt ++)
   {
      for(jCnt = 1; jCnt <= iCol; jCnt++)
   {
         iNumCnt++;
         if(iNumCnt > 9)
         {
            iNumCnt = 1;
         }
         printf("%d \t",iNumCnt);
         
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

