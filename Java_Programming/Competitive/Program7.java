/// Print all Even Numbers up to N

class Logic
{
    void printEvenNumbers(int n)
    {
        int iCnt = 0;

        System.out.println("Even Numbers:");
        for(iCnt = 0; iCnt <= n; iCnt++)
        {
            if(iCnt % 2== 0)
            {
              System.out.println(iCnt);
            }
        }

    }
}

class Program7
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.printEvenNumbers(20);
    }
}