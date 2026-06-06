///     Accept N Numbers from User and Return Diff between Frequency of Even and Odd Numbers
///     INPUT : N : 7 | Elements: 85  66  3  80  93  88  90
///     OUTPUT : 1 (4-3)

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)
{
    int iCnt = 0;                               // Loop counter
    int iEvenCnt = 0;
    int iOddCnt = 0;
    int iDiff = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)       // Traverse the array
    {
        if(Arr[iCnt] % 2 == 0)                  // Check whether the element is Even
        {
            iEvenCnt ++;                        // Store the count of Even Numbers in iEvenCnt
        }
        else{
            iOddCnt ++;                         // Store the count od Odd Numbers in iOddCnt
        }
    }
    iDiff = iEvenCnt - iOddCnt;
    return iDiff ;
}

int main()
{
    int iSize = 0;                              // Stores the number of elements
    int iCnt = 0;                               // Loop counter
    int iRet = 0;
    int *p = NULL;                              // 'p' stands for pointer; it will point to the dynamically allocated memory block

    printf("Enter Number of Elements:");
    scanf("%d", &iSize);                        // Accept the size of the array from the user

    p = (int *)malloc(iSize * sizeof(int));     // Allocate memory for iSize integers and store its starting address in p

    if(p == NULL)                               // Check whether memory allocation was successful
    {
        printf("Unable to allocate the memory");
        return -1;
    }

    printf("Enter your elements: ");

    for(iCnt = 0; iCnt < iSize; iCnt++)         // Traverse the dynamically allocated memory block
    {
        scanf("%d", &p[iCnt]);                  // Store each user-entered value sequentially in memory (p[0], p[1], p[2], ...)
    }

    iRet = Frequency(p, iSize);                          
  
    printf("Difference : %d", iRet);
     
    free(p);                                    // Deallocate dynamically allocated memory

    return 0;                                   // Indicate successful execution
}