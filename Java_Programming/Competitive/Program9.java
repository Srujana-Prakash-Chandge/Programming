/// Find Sum of Even and Odd Digits separately in a Number

class Logic
{
    void sumEvenOddDigits(int n)
    {
       int iSumEven = 0;
       int iSumOdd = 0;
       int iDigit = 0;


       while(n > 0)
        {
         iDigit = n % 10;

        if(iDigit % 2 == 0)
        {
            iSumEven = iSumEven + iDigit;
           
        }

        else 
        {
             iSumOdd = iSumOdd + iDigit;
           
        }
        n = n / 10;
       }

      System.out.println("Sum of Even Digits:" +iSumEven);
       System.out.println("Sum of Odd Digits:" +iSumOdd);

    }
}

class Program9
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.sumEvenOddDigits(123456);
    }
}