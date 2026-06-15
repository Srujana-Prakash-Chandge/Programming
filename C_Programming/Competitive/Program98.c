/// Accept Number of Rows and Columns from User and Display Below Pattern
/// INPUT  : iRow = 5, iCol=5
/// OUTPUT : a    b    c    d    e    
///          1    2    3    4    5
///          a    b    c    d    e    
///          1    2    3    4    5
///          a    b    c    d    e    

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
  int i = 0, j = 0, num = 0;
  char ch = '\0';

  for(i=1, ch = 'a'; i<= iRow; i++)
  {

    if(i % 2 != 0)
    {
        ch = 'a';
    }
    else{
        num = 1;
    }
   for(j = 1, ch = 'a'; j<= iCol; j++, ch++, num++)
   {
       if(i % 2 != 0)
    {
        printf("%c \t", ch);
    }
    else{
        printf("%d \t", num);
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

