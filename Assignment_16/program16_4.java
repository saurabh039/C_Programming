class Logic
{
    void reverseNumber(int num)
    {
        int iRev= 0;
        while(num != 0)
        {
            int digit = num % 10;
            iRev =iRev * 10 + digit;
            num = num / 10;
        }
        System.out.println("Reversed number is: " +iRev);
    }
}

class Program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.reverseNumber(1234);
    }
}
