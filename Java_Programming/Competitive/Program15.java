/// Calculate Power of Number using loops

class Logic
{
    void calculatePower(int base, int exp)
    {
        int iCnt = 0, iDigit = 1;

        System.out.println("Power : ");

        for(iCnt = 1; iCnt <= exp; iCnt ++)
        {
            iDigit = iDigit * base;
        }
       
       System.out.println(iDigit);

    }
}

class Program15
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.calculatePower(2, 5);
    }
}