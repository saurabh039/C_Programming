#include<stdio.h> 
int CountDiff(int iNo) 
{ 
    int iDigit = 0,iOdd = 0,iEven = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if ((iDigit % 2) == 0)
        {
            iEven += iDigit;
        }
        else
        {
            iOdd += iDigit;
        }
        iNo = iNo / 10;
    }
    return (iEven - iOdd);
} 

int main() 
{ 
    int iValue = 0; 
    int iRet = 0; 
    printf("Enter number"); 
    scanf("%d",&iValue); 
    iRet = CountDiff(iValue); 
    printf("%d",iRet);
    return 0; 
}