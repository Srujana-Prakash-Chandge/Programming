///Print Multiplication Table of the Number


class Program5
{
    public static void main (String A[])
    {
        Logic lobj = new Logic();
        lobj.printTable(5);

    }
}


class Logic {
    void printTable(int num)
    {
        int iCnt = 0;
        int iMult = 1;
        for(iCnt = 1; iCnt <= 10; iCnt ++)
        {
            iMult = num * iCnt;
            System.out.println(iMult);
        }

        
    }
}

