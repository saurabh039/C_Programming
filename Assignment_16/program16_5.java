class Logic
{
    void countDigits(int num)
    {
        int iCount= 0;
        while(num != 0)
        {
            iCount++;
            num = num / 10;
        }
        System.out.println("Number of digits: " +iCount);
    }
}

class Program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.countDigits(7865);
    }
}
