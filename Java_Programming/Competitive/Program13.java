/// Check Whether the Number is Divisible by 5 & 11 or not

class Logic
{
    void checkDivisible(int num)
    {
        if((num % 5 == 0) && (num % 11 == 0) )
        {
            System.out.println("It is Divisible");
        }
        else 
        {
            System.out.println("It is not Divisible");
        }
       

    }
}

class Program13
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.checkDivisible(55);
    }
}