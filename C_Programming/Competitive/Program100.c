/// Accept Number of Rows and Columns from User and Display Below Pattern
/// INPUT  : iRow = 4, iCol=4
/// OUTPUT : 1    2    3    4   
///          2    3    4    5 
///          3    4    5    6   
///          4    5    6    7 



#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, iNum = 0;

    // Repeat for each row
    for(i = 1; i <= iRow; i++)
    {
        // Start from the current row number
        iNum = i;

        // Print one row
        for(j = 1; j <= iCol; j++, iNum++)
        {
            // Print number and increase it by 1
            printf("%d\t", iNum);
        }

        // Move to the next row
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

