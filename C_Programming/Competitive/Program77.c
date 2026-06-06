/// Accept N Numbers from User.
/// Return the Smallest Number
/// INPUT  : N : 6  | Elements : 85  66  3  66  93  88
/// OUTPUT : 3

#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[], int iLength)
{
    int iCnt = 0;                                   //iCnt = current index number
                                                    //Arr[iCnt] = value stored at that index
    int iMin = Arr[0];                              //Assume the First Element is Smallest

    for(iCnt = 0; iCnt < iLength; iCnt ++)          // Traverse the array element by element
    {
        if(Arr[iCnt] < iMin)                        //Check whether the Current Element is Smaller than the Current iMin
        {
            iMin = Arr[iCnt];                       //If it is, update iMin with the new Smallest Value
        }
    } 
    
    return iMin;                                    //Return the value Stored in iMin
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

    iRet = Minimum(p, iSize);                 // Pass the address of the array and its size to the Product function and store the returned difference in iRet

    printf("Minimum : %d", iRet);             // Display the Product returned by the Product function

    free(p);                                  // Release dynamically allocated memory

    return 0;                                 // Indicate successful program termination
}