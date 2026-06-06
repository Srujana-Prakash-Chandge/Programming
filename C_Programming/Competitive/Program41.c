///     Accept Number from User and Return Count of Even Digits
///     INPUT : 1018
///     OUTPUT : 2


#include<stdio.h>

int CountEven(int iNo)
{
   int iDigit = 0;
   int iEvenCount = 0;

   if(iNo < 0)
   {iNo = -iNo;}

   while(iNo > 0)          // Loop runs until number becomes 0  
                            // Each iteration processes one digit  
                            // Loop continues because iNo changes using iNo = iNo / 10
   {
    iDigit = iNo % 10;      // % 10 extracts the last digit from the number
                            // Example : 1018 % 10 = 8
                            // Here extracted digit is stored in iDigit
                            // This helps us check each digit one by one
                            // Digits are extracted from right to left

    if(iDigit % 2 == 0){     // Checks whether extracted digit is even
                            // Any number divisible by 2 is an even number
                            // Example : 8 % 2 = 0 -> even

        iEvenCount++;       // Increases count of even digits by 1
                            // Same as : iEvenCount = iEvenCount + 1
                            // This does NOT control the loop (Its not iCnt++ of a for loop) 
                            // It is only used for counting even digits
    }

    iNo = iNo / 10;         // Removes the last digit from the number
                            // Example : 1018 / 10 = 101
                            // This acts like the update statement of the loop (Similar to iCnt++ in a for loop)
                            // Number becomes smaller after every iteration
                            // This helps while loop move toward termination (Runs the While Loop)
                       
   }

   return iEvenCount;       // Returns the Number of Even Digits 

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    iRet = CountEven(iValue);

    printf("The Count of Even Digits : %d\n", iRet);

    return 0;
}


////Time Complexity = O(N)
