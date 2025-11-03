 #include <stdio.h>
 int sum_of_even_factors(int number) 
{
    int iCnt = 0;
    int iSum = 0;
    for (iCnt = 1; iCnt <= number ;iCnt++)
    {
        if (number % iCnt == 0)
        {
            if (iCnt % 2 == 0)
            {
                iSum = iSum + iCnt;
            }
        }
    }
    return 0;
 }

int main() 
{
    int number;
    printf("Enter number : ");
    scanf("%d", &number);
    printf("%d\n", sum_of_even_factors(number));
    return 0;
 }