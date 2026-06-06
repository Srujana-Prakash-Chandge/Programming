///     Accept N Numbers from User and Display all such elements Divisible by 5 and are Even
///     INPUT : N : 6 | Elements: 85  66  3  80  93  88
///     OUTPUT : 80

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
    int iCnt = 0;                               // Loop counter

    for(iCnt = 0; iCnt < iLength; iCnt++)       // Traverse the array
    {
        if((Arr[iCnt] % 2 == 0) && (Arr[iCnt] % 5 == 0)) // Check whether the element is even and divisible by 5
        {
            printf("%d\t", Arr[iCnt]);          // Display the element if both conditions are satisfied
        }
    }
}

int main()
{
    int iSize = 0;                              // Stores the number of elements
    int iCnt = 0;                               // Loop counter
    int *p = NULL;                              // 'p' stands for pointer; it will point to the dynamically allocated memory block

    printf("Enter the number of elements: ");
    scanf("%d", &iSize);                        // Accept the size of the array from the user

    p = (int *)malloc(iSize * sizeof(int));     // Allocate memory for iSize integers and store its starting address in p

    if(p == NULL)                               // Check whether memory allocation was successful
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter your elements: ");

    for(iCnt = 0; iCnt < iSize; iCnt++)         // Traverse the dynamically allocated memory block
    {
        scanf("%d", &p[iCnt]);                  // Store each user-entered value sequentially in memory (p[0], p[1], p[2], ...)
    }

    Display(p, iSize);                          // Display elements that are even and divisible by 5

    free(p);                                    // Deallocate dynamically allocated memory

    return 0;                                   // Indicate successful execution
}