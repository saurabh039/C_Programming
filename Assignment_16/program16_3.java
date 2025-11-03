class Logic
{
    void findFactorial(int num)
    {
        int iFact =1;
        int iCnt =0;
        for(iCnt = 1;iCnt<=num;iCnt++)
        {
           iFact =iFact * iCnt;
        }
        System.out.println("Factorial of " + num + " is: " +iFact);
    }
}

class Program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.findFactorial(5);
    }
}

