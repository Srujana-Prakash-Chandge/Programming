///     Accept N Numbers from User and Accept one Another Number as No , Return Frequency of No from it.
///     INPUT : N : 6 | No : 66 | Elements : 85   66   3   66   93   88
///     OUTPUT : 2


#include<stdio.h>
#include<stdlib.h>



int  Frequency(int Arr[], int iLength, int iNo)
{
int iCnt = 0;
int iNoCnt = 0;

for(iCnt = 0; iCnt < iLength; iCnt ++)              // Traverse the array
{
    if(Arr[iCnt] == iNo)                            // Check Whether the Number is equal to iNo
    {
        iNoCnt ++;                                  // If it is then store the count in iNoCnt (& keep adding the count as next iNo's found)
    }

}
    return iNoCnt;                                  // Return the value stored in iNoCnt
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iValue = 0;
    int *p = NULL;
    

    printf("Enter Number N: ");
    scanf("%d", &iSize);


    printf("Enter Another Number No: ");
    scanf("%d", &iValue);

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

    iRet = Frequency(p, iSize, iValue);             // Call Frequency() and store its return value

    printf("Frequency of No in N : %d", iRet);      // Print the Final Value stored in iRet

    free(p);                                        // Dellocated memory

    return 0;
}