///     Accept a Number from User and if Number < 10 = Print "Hello" otherwise Print "Demo"
///     INPUT : 12  5
///     OUTPUT : 12  12  12  12  12

#include<stdio.h>

 void Display(int iNo)
{
    if(iNo<10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}

int main(){
    int iValue = 0;
    printf("Enter Number:");
    scanf("%d", &iValue);
    Display(iValue);
    return 0;
}