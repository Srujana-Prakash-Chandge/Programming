///     Accept N Numbers from User and Return Difference between Sum of Even Elements and Sum of Odd Elements
///     INPUT : N : 6 | Elements: 85  66  3  80  93  88
///     OUTPUT : 53 (234 - 181)

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iCnt = 0;         // Loop counter
    int iDiff = 0;        // Stores the final difference
    int iEven = 0;        // Stores sum of even elements
    int iOdd = 0;         // Stores sum of odd elements

    for(iCnt = 0; iCnt < iLength; iCnt++)     // Traverse the entire array
    {
        if(Arr[iCnt] % 2 == 0)                // Check whether current element is even
        {
            iEven = iEven + Arr[iCnt];        // Add even element to even sum
        }
        else                                  // If element is odd
        {
            iOdd = iOdd + Arr[iCnt];          // Add odd element to odd sum
        }
    }

    iDiff = iEven - iOdd;                     // Difference = Sum of Even Elements - Sum of Odd Elements

    return iDiff;                             // Return the calculated difference
}

int main()
{
    int iSize = 0;                            // Stores number of elements
    int iRet = 0;                             // Stores function result
    int iCnt = 0;                             // Loop counter

    int *p = NULL;                            // 'p' stands for pointer; it will point to the dynamically created array

    printf("Enter Number of Elements: ");
    scanf("%d", &iSize);                      // Accept size of array from user

    p = (int *)malloc(iSize * sizeof(int));   // Allocate memory for iSize integers and store the starting address in pointer p

    if(p == NULL)                             // Check whether memory allocation was successful
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter elements: ");

    for(iCnt = 0; iCnt < iSize; iCnt++)       // Traverse all indexes of the dynamically allocated array
    {
        scanf("%d", &p[iCnt]);                // Store each user-entered value sequentially in the dynamically allocated memory (p[0], p[1], p[2], ...)
    }               

    iRet = Difference(p, iSize);              // Pass array and size to the function

    printf("Result is %d\n", iRet);           // Display the difference

    free(p);                                  // Deallocate dynamically allocated memory

    return 0;                                 // Indicate successful execution
}