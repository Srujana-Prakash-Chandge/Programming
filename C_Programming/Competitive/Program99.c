/// Accept Number of Rows and Columns from User and Display Below Pattern
/// INPUT  : iRow = 5, iCol=5
/// OUTPUT : 1    2    3    4    5  
///         -1   -2   -3   -4   -5
///          1    2    3    4    5  
///         -1   -2   -3   -4   -5
///          1    2    3    4    5    



#include<stdio.h>

void Pattern(int iRow, int iCol)
{
 int i = 0, j =0, iNum1 = 0, iNum2 = 0;


 for(i = 1; i<= iRow; i++)
 {
    if(i % 2 != 0)
    {
        iNum1 = 1;
    }
    else
    {
        iNum2 = 1;
    }
        for(j = 1; j <= iCol; j++, iNum1++, iNum2++)
        {
            if(i % 2 != 0)
            {
                printf("%d \t", iNum1);
            }
            else
            {
                printf("-%d \t", iNum2);
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

