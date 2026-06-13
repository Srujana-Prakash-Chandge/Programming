/// Print all Numbers from 1 to N that are Divisibe by both 2 & 3

class Logic
{
    void printDivisibleBy2And3(int num)
    {
        int iCnt = 0;

        System.out.println("Numbers from 1 to 30 that are Divisibe by both 2 & 3");

        for(iCnt = 1; iCnt <= num; iCnt ++)
        {
            if((iCnt % 2 == 0) && (iCnt % 3 == 0))
            {
                System.out.println(iCnt);
            }
        }
    }
}

class Program25
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.printDivisibleBy2And3(30);
    }
}