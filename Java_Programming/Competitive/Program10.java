/// Check whether the Number is Even or Odd



class Logic
{
    void checkSign(int num)
    {
       if(num < 0)
       {
        System.out.println("It is Negative");
       }
       else if(num > 0)
       {
        System.out.println("It is Positive");
       }
       else if(num == 0)
       {
        System.out.println("It is Zero");
       }
        
    }
}

class Program10
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.checkSign(-8);
    }
}