///     Accept N Numbers from User and Return Frequency of 11 from it.
///     INPUT : N : 6 | Elements: 85  66  3  15  93  88 
///     OUTPUT : 0


#include<stdio.h>
#include<stdlib.h>



int  Frequency(int Arr[], int iLength)
{
int iCnt = 0;
int iElevenCnt = 0;

for(iCnt = 0; iCnt < iLength; iCnt ++)              // Traverse the array
{
    if(Arr[iCnt] == 11)                             // Check Whether the Number is 11
    {
        iElevenCnt ++;                              // If 11 then store the count in iElevenCnt (& keep adding the count as next 11's found)
    }

    
}
return iElevenCnt;                                  // Return the value stored in iElevenCnt
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;
    

    printf("Enter Number of Elements: ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * (sizeof(int)));       // Allocate memory for iSize integers and store its starting address in p
    if(p == NULL)                                   // Check whether memory allocation was successful
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter your elements: ");
    for(iCnt = 0; iCnt < iSize; iCnt++)             // Read all array elements    
    {    
        scanf("%d", &p[iCnt]);                      // Store each user-entered value sequentially in memory (p[0], p[1], p[2], ...)
    }

    iRet = Frequency(p, iSize);                     // Call Frequency() and store its return value

    printf("Frequency of 11: %d", iRet);            // Print the Final Value stored in iRet

    free(p);                                        // Free the allocated memory



    return 0;
}