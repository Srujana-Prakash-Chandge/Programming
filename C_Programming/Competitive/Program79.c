/// Accept N Numbers from User.
/// Display all Such Numbers which Contains 3 Digit in it
/// INPUT  : N : 6  | Elements : 8225  665  3  76  953  858
/// OUTPUT : 665  953  858

#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
    int iCnt = 0;                                   //iCnt = current index number
                                                    //Arr[iCnt] = value stored at that index                                           

    for(iCnt = 0; iCnt < iLength; iCnt ++)          // Traverse the array element by element
    {

       if(Arr[iCnt] > 100 && Arr[iCnt] < 999)       // This condition checks for a 3 digit Number
       {
        printf("%d\t", Arr[iCnt]);                  //Print the Element if 3 Digit Number found
       } 
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

    Digits(p, iSize);                 
   

    free(p);                                  // Release dynamically allocated memory

    return 0;                                 // Indicate successful program termination
}