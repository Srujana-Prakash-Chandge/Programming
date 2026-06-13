/// Calculate Product of Digits of Number

class Logic
{
    void productOfDigits(int num)
    {
       int iDigit = 0, iProd = 1;

       while(num > 0)
       {
        iDigit = num % 10;
        iProd = iProd * iDigit;
        num = num / 10;
       }

       System.out.println("Product of Digits: " + iProd);
    }
}

class Program21
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.productOfDigits(234);
    }
}