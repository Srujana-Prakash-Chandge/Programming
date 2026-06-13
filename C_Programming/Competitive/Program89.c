/// Accept Number of Rows and Columns from User and Display Below Pattern
/// INPUT  : iRow = 3, iCol=4
/// OUTPUT : *    #    *    #  
///          *    #    *    #  
///          *    #    *    #  



#include<stdio.h>

void Pattern(int iRow, int iCol)
{
   int iCnt = 0, jCnt = 0;


   for(iCnt = 1; iCnt <= iRow; iCnt ++)
   {
      for(jCnt = 1; jCnt <= iCol; jCnt++)
      {
        
         if(jCnt % 2 == 1)                    // Odd column
            {
                printf("*\t");
            }
            else                              // Even column
            {
                printf("#\t");
            }
         }
         
      }
         printf(" \n");
   }



   /*for(iCnt = 1; iCnt <= iRow; iCnt ++)
   {
      for(jCnt = 1; jCnt <= (iCol/2); jCnt++)
      {
         printf("*  \t  #  \t  ");
         
      }
         printf(" \n");
   }*/
}

int main()
{
   int iValue1 = 0, iValue2 = 0;
   printf("Enter Number of Rows and Columns :");
   scanf("%d %d", &iValue1, &iValue2);
   Pattern(iValue1, iValue2);
}

