#include<stdio.h>
void RangeDisplayEven(int iStart , int iEnd)
{
    int iCnt = 0;
    for (iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if ((iCnt % 2) == 0)
        {
            printf("%d",iCnt);
        }
    }
}
int main()
{
int iValue1 = 0, iValue2 = 0;
printf("Enter starting point");
scanf("%d",&iValue1);
printf("Enter ending point");
scanf("%d",&iValue2);
RangeDisplay(iValue1, iValue2);
return 0;
} 
