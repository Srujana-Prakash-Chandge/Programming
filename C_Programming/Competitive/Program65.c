///     Accept N Numbers from User and Display all such elements that are multiples of 11
///     INPUT : N : 6 | Elements: 85  66  3  55  93  88
///     OUTPUT : 66  55  88

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
    int iCnt = 0;                               // Loop counter

    for(iCnt = 0; iCnt < iLength; iCnt++)       // Traverse the array
    {
        if(Arr[iCnt] % 11 == 0)                 // Check whether the element is divisible by 11
        {
            printf("%d\t", Arr[iCnt]);          // Display the element if it is a multiple of 11
        }
    }
}

int main()
{
    int iSize = 0;                              // Stores the number of elements
    int iCnt = 0;                               // Loop counter

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

    Display(p, iSize);                          // Display all elements that are multiples of 11

    free(p);                                    // Deallocate dynamically allocated memory

    return 0;                                   // Indicate successful execution
}