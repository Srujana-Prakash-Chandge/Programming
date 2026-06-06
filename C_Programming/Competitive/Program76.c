/// Accept N Numbers from User.
/// Return the Largest Number
/// INPUT  : N : 6  | Elements : 85  66  3  66  93  88
/// OUTPUT : 93

#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[], int iLength)
{
    int iCnt = 0;                               //iCnt = current index number
                                                //Arr[iCnt] = value stored at that index
    int iMax = Arr[0];                          //Assume the First Element is Largest

    for(iCnt = 1; iCnt < iLength; iCnt++)       // Traverse the array element by element
    {
        if(Arr[iCnt] > iMax)                    // Check whether current element is greater than current maximum
        {
            iMax = Arr[iCnt];                   // Current array element is larger than iMax, 
                                                //so update iMax with the new largest value
        }
    }

    return iMax;                                // Return the largest element
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

    iRet = Maximum(p, iSize);                 // Pass the address of the array and its size to the Product function and store the returned difference in iRet

    printf("Maximum : %d", iRet);             // Display the Product returned by the Product function

    free(p);                                  // Release dynamically allocated memory

    return 0;                                 // Indicate successful program termination
}