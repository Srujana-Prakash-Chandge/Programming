/// Accept N Numbers from User and Accept another Number as No.
/// Return index of Last occurrence of that No.
/// INPUT  : N : 6 | No : 66 | Elements : 85 66 3 66 93 88
/// OUTPUT : 1

#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;                             //iCnt = current index number
                                              //Arr[iCnt] = value stored at that index

    for(iCnt = iLength; iCnt > 0; iCnt--)     // Traverse the array element by element
    {
        if(Arr[iCnt] == iNo)                  // Check whether current element matches the given number
        {
            return iCnt;                      // Return index of Last occurrence
        }
    }

    return -1;                                // Return -1 if the number is not found
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iValue = 0;
    int *p = NULL;

    printf("Enter the Number N: ");
    scanf("%d", &iSize);                      // Accept size of the array

    printf("Enter the Number No: ");
    scanf("%d", &iValue);                     // Accept number to be searched

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

    iRet = LastOcc(p, iSize, iValue);         // Pass the address of the array & its size & the Number No to the LastOcc function and store the returned difference in iRet
    if(iRet == -1)                            // Check whether the number was found
    {
        printf("There is no such Number");
    }
    else
    {
        printf("Last Occurrence of the Number is %d", iRet); // Display index of Last occurrence
    }

    free(p);                                  // Release dynamically allocated memory

    return 0;                                 // Indicate successful program termination
}