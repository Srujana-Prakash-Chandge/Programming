///Find Sum of Digits of the Number 
///Output: 10


class Program1 {
    public static void main(String A[]) {
        Logic lobj = new Logic();
        lobj.SumOfDigits(1234);
    }
}

class Logic {
    void SumOfDigits(int num) {
        int iDigit = 0;
        int iSum = 0;

        while (num > 0) {
            iDigit = num % 10;
            iSum += iDigit;
            num = num / 10;
        }

        System.out.println("Sum of Digits : " + iSum);
    }
}