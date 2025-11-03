#include<stdio.h>
int RangeSum(int iStart , int iEnd)
{
    if (iStart<0 ||iEnd < iStart)
    {
        return -1;
    }
    int iCnt = 0,iSum = 0;
    for (iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        iSum = iSum + iCnt;
    }
    return iSum;
}
int main()
{
int iValue1 = 0, iValue2 = 0, iRet =0;
printf("Enter starting point");
scanf("%d",&iValue1);
printf("Enter ending point");
scanf("%d",&iValue2);
iRet = RangeSum(iValue1, iValue2);
printf("Addition is %d",iRet);
return 0;
} 