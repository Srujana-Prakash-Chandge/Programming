/// Print each Digit of Number Separately

class Logic
{
    void printDigits(int num)
    {
        int iDigit = 0;

        System.out.println("Digits : ");

        while (num > 0)
        {
            iDigit = num % 10;

            System.out.println(iDigit);

            num = num / 10;
        }
       

    }
}

class Program14
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.printDigits(9876);
    }
}