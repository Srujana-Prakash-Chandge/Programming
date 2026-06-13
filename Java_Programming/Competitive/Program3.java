///Find Maximum of 2 Numbers
///Output: 20


class Program3 {
    public static void main(String A[]) {
        Logic lobj = new Logic();
        lobj.FindMax(20, 15);
    }
}

class Logic {
    void FindMax(int a, int b) {

        if(a > b)
        {
            System.out.println("First Number 20 is Maximum");
        }

        else
        {
            System.out.println("Second Number 15 is Maximum");
        }

    }  
   
}