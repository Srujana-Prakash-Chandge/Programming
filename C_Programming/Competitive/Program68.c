///     Accept N Numbers from User and Check whether that Numbers Contains 11 in it or not
///     INPUT : N : 6 | Elements: 85  66  11  80  93  88 
///     OUTPUT : 11 is present

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Check(int Arr[], int iLength)
{
   int iCnt = 0;
   for(iCnt = 0; iCnt < iLength; iCnt ++)    /// Traverse the Array
   {
      if(Arr[iCnt] == 11)                    /// Checks for presence of 11
      {
        return 1;                            ///Returns True if 11 found
      }
   }
return 0;                                    ///Returns False if 11 not found

}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;
    BOOL bRet = FALSE;

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

    bRet = Check(p, iSize);                         // Call Check() and store its return value

    if(bRet != 0)                                   // If return value is TRUE
    {
        printf("11 is present");
    }
    else                                            // If return value is FALSE
    {
        printf("11 is absent");
    }

    free(p);                                        // Free the allocated memory



    return 0;
}