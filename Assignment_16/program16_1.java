class Logic
{
    void calculateSum(int n)
    {
        int iSum= 0;
        int iCnt = 0;
        for( iCnt=1;iCnt <=n;iCnt++)
        {
           iSum += iCnt;
        }
        System.out.println("Sum of first " + n + " natural numbers is: " +iSum);
    }
}

class Program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.calculateSum(10);
    }
}
