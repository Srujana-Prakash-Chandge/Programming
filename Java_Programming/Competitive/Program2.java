///Check whether the Number is Palindrome
///Output: Yes, Its a Palindrome Number


class Program2 {
    public static void main(String A[]) {
        Logic lobj = new Logic();
        lobj.CheckPalindrome(121);
    }
}

class Logic {
    void CheckPalindrome(int num) {
        int iDigit = 0;
        int iRev = 0;
        int iNum = num;

        while(num > 0)
        {

        iDigit = num % 10;
        iRev = (iRev * 10) + iDigit;
        num =  num / 10;

        }

        if(iNum == iRev)
        {
            System.out.println("Yes, Its a Palindrome Number");
        }

        else
        {
            System.out.println("NO, Its not a Palindrome Number");
        }

    }  
   
}