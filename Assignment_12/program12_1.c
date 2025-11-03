#include <stdio.h>
void print_factors(int number)
{
    int iCnt = 0;
    for (iCnt = 1; iCnt <= number; iCnt++)
    {
        if (number % iCnt == 0)
        {
            printf("%d ", iCnt);
        }
    }
}
int main()
{
    int number;
    printf("Enter number : ");
    scanf("%d", &number);
    print_factors(number);
    return 0;
}