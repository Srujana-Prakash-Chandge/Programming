/// Check Whether the Given Year is Leap Year or Not

class Logic
{
    void checkLeapYear(int year)
    {
        if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        {
            System.out.println(year + " is a Leap Year");
        }
        else
        {
            System.out.println(year + " is Not a Leap Year");
        }
    }
}

class Program11
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.checkLeapYear(2024);
    }
}