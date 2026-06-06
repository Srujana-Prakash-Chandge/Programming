/// Accept N Numbers from User and Accept Range
/// Display all Elements from that Range
/// INPUT  : N : 6  |start:60   | end:90     |Elements : 85 66 3 76 93 88 
/// OUTPUT : 66  77  88

#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int iLength, int iStart, int iEnd)
{
    int iCnt = 0;                                           //iCnt = current index number
                                                            //Arr[iCnt] = value stored at that index
    
    printf("Elements in the range are : ");                                        
   
    for(iCnt = 0; iCnt < iLength; iCnt++)                   // Traverse the array element by element
    {
        if(Arr[iCnt] > iStart && Arr[iCnt] < iEnd)          // Check for the condition  
        {
            printf("%d\t", Arr[iCnt]);                      // Prints the Number Between the Range
        }       
    }

       
    }
    

int main()
{
    int iSize = 0, iCnt = 0, iValue1 = 0, iValue2 = 0;
    int *p = NULL;

    printf("Enter the Number N: ");
    scanf("%d", &iSize);    
    
     printf("Enter the Starting Point: ");
    scanf("%d", &iValue1);    


     printf("Enter the Ending Point: ");
    scanf("%d", &iValue2);    

    p = (int *)malloc(iSize * sizeof(int));                 // Dynamically allocate memory for N integers

    if(p == NULL)
    {
        printf("Unable to allocate memory.");
        return -1;                                          // Terminate if memory allocation fails
    }

    printf("Enter your elements: ");

    for(iCnt = 0; iCnt < iSize; iCnt++)                     // Read all array elements from user
    {
        scanf("%d", &p[iCnt]);                              // Store each element in allocated memory
    }

    Range(p, iSize, iValue1, iValue2);                      // Pass the address, size of the array and Start point, End Point to the Range function.

    

    free(p);                                                // Release dynamically allocated memory

    return 0;                                               // Indicate successful program termination
}