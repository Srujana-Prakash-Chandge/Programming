/// Check Whether the Number is Prime or Not

class Logic
{
    void CheckPrime(int num)
    {
        int iCnt = 0;

        if(num <= 1)
        {
            System.out.println("Not Prime");
            return;
        }

        for(iCnt = 2; iCnt < num; iCnt++)
        {
            if(num % iCnt == 0)
            {
                System.out.println("Not Prime");
                return;
            }
        }

        System.out.println("Prime");
    }
}

class Program6
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.CheckPrime(11);
    }
}