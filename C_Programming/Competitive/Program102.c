/// Accept Number of Rows and Columns from User and Display Below Pattern
/// INPUT  : iRow = 4, iCol=4
/// OUTPUT : *    *    *    * 
///          *    *    *    #
///          *    *    #    # 
///          *    #    #    #  
///          



#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
      
       
        for(j = iCol; j >= 1; j--)
        {
            if(j >= i)
            {
                 printf("*");
            }
           
            else{
 printf("#");
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

