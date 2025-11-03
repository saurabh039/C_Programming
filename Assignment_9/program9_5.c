#include<stdio.h> 
int FactorialDiff(int iNo) 
{ 
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt=0;
    int iEven=1;
    int iOdd=1;

    for(iCnt=2;iCnt<=iNo;iCnt+=2)
    {
        iEven=iEven * iCnt;
    }

    for(iCnt=1;iCnt<=iNo;iCnt+=2)
    {
        iOdd=iOdd * iCnt;
    }

    return (iEven - iOdd);
} 

int main() 
{ 
int iValue = 0,iRet = 0; 
printf("Enter number"); 
scanf("%d",&iValue); 
iRet = FactorialDiff(iValue); 
printf("Factorial difference is %d",iRet); 
return 0;
}
 