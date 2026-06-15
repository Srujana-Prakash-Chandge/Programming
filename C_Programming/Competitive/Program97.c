/// Accept Number of Rows and Columns from User and Display Below Pattern
/// INPUT  : iRow = 4, iCol=5
/// OUTPUT : 2    4    6    8    10    
///          1    3    5    7     9 
///          2    4    6    8    10 
///          1    3    5    7     9 


#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iNume = 0, iNumo = 0;

    // Traverse each row
    for(i = 1; i <= iRow; i++)
    {
        // For odd rows, prepare even number series
        if(i % 2 != 0)
        {
            iNume = 0;
        }
        // For even rows, prepare odd number series
        else
        {
            iNumo = -1;
        }

        // Traverse each column
        for(j = 1; j <= iCol; j++)
        {
            // Print even numbers in odd rows
            if(i % 2 != 0)
            {
                printf("%d\t", iNume = iNume + 2);
            }
            // Print odd numbers in even rows
            else
            {
                printf("%d\t", iNumo = iNumo + 2);
            }
        }

        // Move cursor to next row
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

