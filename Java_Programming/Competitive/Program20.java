/// Find Smallest Digit in the Given Number

class Logic
{
    void findSmallestDigit(int num)
    {
        int  iDigit = 0,  iMinNum = 9;
        

        while(num > 0)
        {
            iDigit = num % 10;
            if(iDigit < iMinNum)
            {
                iMinNum = iDigit;
            }
            num = num / 10;
        }

        System.out.println("Smallest Digit is " + iMinNum);
       

    }
}

class Program20
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.findSmallestDigit(45872);
    }
}