///     Accept Number from User and Print that Number of *s on Screen
///     INPUT : 3
///     OUTPUT : *   *   *

#include <stdio.h>

void Display(int iNo)
{
    while(iNo > 0)
    {
        printf("*\t");
        iNo--;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}