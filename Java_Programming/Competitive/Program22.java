/// Count How Many Even and Odd Numbers are Between 1 & N

class Logic
{
    void countEvenOddRange(int n)
    {
        int iCnt = 0, iCountEven =0, iCountOdd = 0;

        for (iCnt = 0; iCnt <= n; iCnt ++)
        {
            if(iCnt % 2 == 0)
            {
                iCountEven ++;
            }
            else
            {
                iCountOdd ++;
            }
        }
        System.out.println("Even Number Count: "+ iCountEven);
        System.out.println("Odd Number Count: "+ iCountOdd);
    }
}

class Program22
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.countEvenOddRange(50);
    }
}