/// Accept N Numbers from User.
/// Return Product of all Odd Elements
/// INPUT  : N : 6  | Elements : 15  66  3  70  10  88
/// OUTPUT : 45

#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iLength)
{
    int iCnt = 0;                               //iCnt = current index number
                                                //Arr[iCnt] = value stored at that index
    int iOddCnt = 0, iProd = 1;

    for(iCnt = 0; iCnt < iLength; iCnt++)       // Traverse the array element by element
    {
        if(Arr[iCnt] % 2 != 0)                  // Check whether current element is ODD
        {
           iProd = iProd * Arr[iCnt];           // Multipy teh current odd Element with iProd and update the product
        
        }
    return iProd;                               //Returns The Result of Product
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

    iRet = Product(p, iSize);                 // Pass the address of the array and its size to the Product function and store the returned difference in iRet

    printf("Product : %d", iRet);             // Display the Product returned by the Product function

    free(p);                                  // Release dynamically allocated memory

    return 0;                                 // Indicate successful program termination
}