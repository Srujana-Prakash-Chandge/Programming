/// Print Numbers if N down to 1 in reverse order.

class Logic
{
    void printReverse(int n)
    {
        int iCnt = 0;

        System.out.println("Reverse Order : ");

        for(iCnt = n; iCnt >= 1; iCnt --)
        {
             System.out.println(iCnt);
        }
       

    }
}

class Program17
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.printReverse(10);
    }
}