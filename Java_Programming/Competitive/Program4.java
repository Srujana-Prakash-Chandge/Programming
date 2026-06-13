///Find Minimum of 3 Numbers
///Output: 2


class Program4 {
    public static void main(String A[]) {
        Logic lobj = new Logic();
        lobj.FindMin(3,7,2);
    }
}

class Logic {
    void FindMin(int a, int b, int c) {

        if((a < b) && (a < c))
        {
            System.out.println(a + " is Minimum");
        }

        else if((b < a) && b < c)
        {
            System.out.println( b + " is Minimum");
        }

        else{
            System.out.println( c + " is Minimum");
        }



    }  
   
}