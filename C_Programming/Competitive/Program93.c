/// Accept Number of Rows and Columns from User and Display Below Pattern
/// INPUT  : iRow = 3, iCol=5
/// OUTPUT : A    A    A    A    A 
///          B    B    B    B    B
///          C    C    C    C    C
   
///         i,j
///         1,1  1,2  1,3  1,4  1,5
///         2,1  2,2  2,3  2,4  2,5
///         3,1  3,2  3,3  3,4  3,5





#include<stdio.h>

void Pattern(int iRow, int iCol)
{
   int iCnt = 0, jCnt = 0;
   char cElement1 ='\0';

   for(iCnt = 1, cElement1 = 'A';iCnt <= iRow; iCnt ++, cElement1++)
   {

      for(jCnt = 1;  jCnt <= iCol; jCnt++)
   {
     
         printf("%c \t", cElement1);
     
     
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

