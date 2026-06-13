/// Find Largest Digit in the Given Number

class Logic
{
    void findLargestDigit(int num)
    {
        int  iDigit = 0,  iMaxNum = 0;
        

        while(num > 0)
        {
            iDigit = num % 10;
            if(iDigit > iMaxNum)
            {
                iMaxNum = iDigit;
            }
            num = num / 10;
        }

        System.out.println("Largest Digit is " + iMaxNum);
       

    }
}

class Program19
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.findLargestDigit(83429);
    }
}