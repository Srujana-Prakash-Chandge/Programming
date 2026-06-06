///     Accept Single Digit Number from User & print it into word
///     INPUT : 5
///     OUTPUT : Five

#include<stdio.h>

void Display(int iNo)
{
    // Convert negative number to positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Check if number is single digit
    if(iNo >= 0 && iNo <= 9)
    {
        if(iNo == 0)
        {
            printf("Zero");
        }
        else if(iNo == 1)
        {
            printf("One");
        }
        else if(iNo == 2)
        {
            printf("Two");
        }
        else if(iNo == 3)
        {
            printf("Three");
        }
        else if(iNo == 4)
        {
            printf("Four");
        }
        else if(iNo == 5)
        {
            printf("Five");
        }
        else if(iNo == 6)
        {
            printf("Six");
        }
        else if(iNo == 7)
        {
            printf("Seven");
        }
        else if(iNo == 8)
        {
            printf("Eight");
        }
        else if(iNo == 9)
        {
            printf("Nine");
        }
    }
    else
    {
        printf("Invalid");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}

// Time Complexity = O(1)