 #include <stdio.h>

 int count_factors(int number) 
{
    int iCnt = 0;
    int iFCount = 0;
    for(iCnt = 1; iCnt <= number; iCnt++)
    {
        if (number % iCnt == 0)
        {
            iFCount++;
        }
    }
    return iFCount;
 }

int main() 
{
    int number;
    printf("Enter number : ");
    scanf("%d", &number);
    printf("%d\n", count_factors(number));
     return 0;
 }