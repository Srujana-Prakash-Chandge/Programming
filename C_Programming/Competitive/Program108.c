/// Accept Number of Rows and Columns from User and Display Below Pattern
/// INPUT  : iRow = 5, iCol=5
/// OUTPUT : $   *    *   *   *
///          #   $    *   *   * 
///          #   #    $   *   *   
///          #   #    #   $   * 
///          #   #    #   #   $

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    for(i = 1; i<= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i == j)
            {
                printf("$");
            }
            else if(i<=j)
            {
                printf("*");
            }
            else if(i>=j){
                printf("#");
            }
            
        }
        printf("\n");
    }


}

int main(){

    int iValue1 = 0, iValue2= 0;
    printf("Enter Rows");
    scanf("%d", &iValue1);
    printf("Enter Columns");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);
    return 0;

}