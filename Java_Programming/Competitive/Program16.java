/// Find Sum of all Even Numbers up to N.

class Logic
{
    void sumEvenNumbers(int n)
    {
        int iCnt = 0, iSum = 0;

        System.out.println("Sum of Even Numbers : ");

        for(iCnt = 0; iCnt <= n; iCnt ++)
        {
            if(iCnt % 2 == 0)
            {
                iSum = iSum + iCnt;
            }
        }
       
       System.out.println(iSum);

    }
}

class Program16
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.sumEvenNumbers(10);
    }
}