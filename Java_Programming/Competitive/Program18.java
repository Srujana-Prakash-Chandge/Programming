/// Check Whether the Number is Perfect or Not

class Logic
{
    void checkPerfect(int num)
    {
        int iCnt = 0, iSum = 0;

        

        for(iCnt = 1; iCnt <= (num / 2); iCnt ++)
        {
            if(num % iCnt == 0)
            {
                iSum = iSum + iCnt;
            }
        }

        if(iSum == num)
        {
            System.out.println("Its a Perfect Number");
        }
        else{
             {
            System.out.println("Its not a Perfect Number");
        }
        }
       

    }
}

class Program18
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.checkPerfect(6);
    }
}