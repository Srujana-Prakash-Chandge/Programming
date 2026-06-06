///     Accept N Numbers from User and Accept one Another Number as No , Check Whether No is presemt or not
///     INPUT : N : 6 | No : 66 | Elements : 85   66   3   66   93   88
///     OUTPUT : TRUE


#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check (int Arr[], int iLength, int iNo)
{

    int iCnt = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++){
        if(Arr[iCnt] == iNo)
        {
            return TRUE;
        }
    }

    return FALSE;
}

int main (){
    int iSize = 0, iCnt = 0, iValue = 0;
    int * p = NULL;
    BOOL bRet = FALSE;

    printf("Enter the Number N: ");
    scanf("%d", &iSize);

    printf("Enter the Number No: ");
    scanf("%d", &iValue);

    p = (int *)malloc(iSize * sizeof(int));
    if(p == NULL)
    {
        printf("Uncable to allocate memory.");
        return -1;
    }

    printf("Enter your elements: ");
     for(iCnt = 0; iCnt < iSize; iCnt++)             // Read all array elements    
    {    
        scanf("%d", &p[iCnt]);                      // Store each user-entered value sequentially in memory (p[0], p[1], p[2], ...)
    }

    bRet = Check(p, iSize, iValue);
    if(bRet == TRUE)
    {
        printf("TRUE");
    }
    else{
        printf("FALSE");
    }

    free(p);

    return 0;
    
}