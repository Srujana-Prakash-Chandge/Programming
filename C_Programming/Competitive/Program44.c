///     Accept Number from User and Return Multiplication of all Digits
///     INPUT : 2395
///     OUTPUT : 270


#include<stdio.h>

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iMulti = 1;
    
    if(iNo<0) {iNo = -iNo;} 

   while(iNo > 0)             
{
    iDigit = iNo % 10;          // Extracts the last digit
        
    iMulti = iMulti * iDigit;   // Stores multiplication of digits (Ex: iMulti = 1 * 5)

    iNo = iNo / 10;             // Removes the last digit and updates number for next iteration
         
}
return iMulti;                  // Returns final multiplication of all digits
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    iRet = MultDigits(iValue);

    printf("Multiplication of all Digits : %d\n", iRet);

    return 0;
}


////Time Complexity = O(N)
