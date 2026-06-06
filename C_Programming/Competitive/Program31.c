///     Accept Number from User and Display Pattern 
///     INPUT : 5
///     OUTPUT : *  *   *   *   *   #   #   #   #   #


#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= (iNo * 2); iCnt++)
    {
        if(iCnt <= iNo)
        {
            printf("*");
        }
        else
        {
            printf("#");
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}


////Time Complexity = O(N)
/*
Suppose input is:
iNo = 4

Loop becomes:
for(iCnt = 1; iCnt <= 8; iCnt++)

because:
iNo * 2 = 8

Now loop runs from 1 to 8.

Condition:
if(iCnt <= iNo)

means:
if(iCnt <= 4)

So:

iCnt = 1 -> true  -> prints '*'
iCnt = 2 -> true  -> prints '*'
iCnt = 3 -> true  -> prints '*'
iCnt = 4 -> true  -> prints '*'
iCnt = 5 -> false -> prints '#'
iCnt = 6 -> false -> prints '#'
iCnt = 7 -> false -> prints '#'
iCnt = 8 -> false -> prints '#'

Final Output:
****####

Main idea:
First half of loop prints '*'
Second half prints '#'
*/