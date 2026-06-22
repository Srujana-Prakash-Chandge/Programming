/// Display ASCII Table , Table contains Symbol, Decimal, Hexadecimal, OctalDecimal of every number from 0 to 255 


#include <stdio.h>



void DisplayASCII()
{
    int i = 0;
    printf("Dec\tChar\tHex\tOct\n");
    printf("--------------------------------\n");

    for(i = 0; i <= 255; i++)
    {
        printf("%d\t%c\t%X\t%o\n", i, i, i, i);
    }
}

int main(){

    

    DisplayASCII();

    
    return 0;

}