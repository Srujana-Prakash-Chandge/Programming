/// Print the Count of all Factors of the Number

class Logic
{
    void countFactors(int num)
    {
       int iCnt = 0, iCountFact = 0;

       for(iCnt = 1; iCnt <= num; iCnt ++)
       {
        if(num % iCnt == 0)
        {
            iCountFact++;
        }
       }

       System.out.println("Count of all Factors: "+ iCountFact);
    }
}

class Program24
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.countFactors(20);
    }
}