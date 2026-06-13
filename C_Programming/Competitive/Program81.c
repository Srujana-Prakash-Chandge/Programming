/// Accept Number from User and Display Below Pattern
/// INPUT  : 5
/// OUTPUT : A   B   C   D   E

#include<stdio.h>

void Pattern(int iNo)
{
   int iCnt = 0;
   char cElements = 'A';                        // Initialize character with 'A' (ASCII value 65)
   for(iCnt = 1; iCnt <= iNo; iCnt ++)
   {
     
      printf("%c \t", cElements);               // Print current character (A, B, C, D, ...)
      cElements ++;                             // Increment character to next ASCII value
                                                // 'A'(65) -> 'B'(66) -> 'C'(67) -> 'D'(68) -> ...
      

   }
}

int main()
{
    int iValue = 0;
    printf("Enter the Number of Elements");
    scanf("%d", &iValue);
    Pattern(iValue);
    return 0;                                   // Indicate successful program termination
}