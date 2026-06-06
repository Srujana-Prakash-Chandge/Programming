///     Accept Number from User and Print that Number of Event Numbers on Screen
///     INPUT : 7
///     OUTPUT : 2  4   6   8   10  12  14


///Check FLOW AND LOGIC
#include<stdio.h>
void PrintEven(int iNo)
{
    if(iNo<=0)
    {
        return ;

    }


    int iCnt = 0;


   
        for(iCnt=2;iCnt<= iNo*2; iCnt+=2){

            
            printf("%d\t", iCnt);
        

    }

}
int main(){
    int iValue = 0;
    printf("Enter Number: \n");
    scanf("%d", &iValue);
    PrintEven(iValue);
    return 0;
}