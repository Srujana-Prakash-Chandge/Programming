/// Display the grade of a student based on marks

class Logic
{
    void displayGrade(int marks)
    {
        if((marks>=70) && (marks <=80) )
        {
            System.out.println("Grade : B++");
        }
        else if((marks>=80) && (marks <=90))
        {
            System.out.println("Grade : A");
        }
        else if((marks>=90) && (marks <=100))
        {
            System.out.println("Grade : A+");
        }

    }
}

class Program12
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.displayGrade(82);
    }
}