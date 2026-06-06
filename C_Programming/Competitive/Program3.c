///     Program to Print 5 to 1 Numbers on Screen
   
///     OUTPUT : 5  4   3   2   1

#include <stdio.h>

void Display(){
    int i = 0;
    i = 5;
    while(i>=1)
    {
        printf("%d\t",i);
        i--;
    }

}

int main(){
    Display();
    return 0;
}