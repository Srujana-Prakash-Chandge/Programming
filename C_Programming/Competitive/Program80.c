/// Accept N Numbers from User.
/// Display Summation of Digits of each Number
/// INPUT  : N : 6  | Elements : 8225  665  3  76  953  858
/// OUTPUT : 17  17  3  13  17  21

#include<stdio.h>
#include<stdlib.h>

void DigitSum(int Arr[], int iLength)
{
    int iCnt = 0;                           //iCnt = current index number
                                            //Arr[iCnt] = value stored at that index    
                                                    
    int iDigit = 0;                         // Stores the current digit extracted from the number
    int iSum = 0;                           // Stores the sum of digits of the current number
    int iNo = 0;                            // Temporary variable to process each number

    for(iCnt = 0; iCnt < iLength; iCnt++)   // Traverse the array element by element
    {
    iNo = Arr[iCnt];                        // Copy current array element for digit processing
    int iSum = 0;                           // Reset iSum for the current number

    while(iNo > 0)                          // Extract and process each digit of the number
    {
        iDigit = iNo % 10;                  // Get the last digit
        iSum = iSum + iDigit;               // Add the extracted digit to the current sum of digits
        iNo = iNo / 10;                     // Remove the last digit
    }

    printf("%d\t", iSum);                   // Display the sum of digits of the current number
}
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iValue = 0;
    int *p = NULL;

    printf("Enter the Number N: ");
    scanf("%d", &iSize);                      // Accept size of the array


    p = (int *)malloc(iSize * sizeof(int));   // Dynamically allocate memory for N integers

    if(p == NULL)
    {
        printf("Unable to allocate memory.");
        return -1;                            // Terminate if memory allocation fails
    }

    printf("Enter your elements: ");

    for(iCnt = 0; iCnt < iSize; iCnt++)       // Read all array elements from user
    {
        scanf("%d", &p[iCnt]);                // Store each element in allocated memory
    }

    DigitSum(p, iSize);                 
   

    free(p);                                  // Release dynamically allocated memory

    return 0;                                 // Indicate successful program termination
}