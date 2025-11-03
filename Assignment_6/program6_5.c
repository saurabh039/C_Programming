#include<stdio.h>  
float Percentage(int iNo1, int iNo2) 
{ 
    float fPer = 0.0;

    if (iNo1 == 0)
    {
        return 0.0;
    }

    fPer = ((float)iNo2 / (float)iNo1) * 100;
    return fPer;
} 

int main() 
{ 
    int iValue1 = 0,iValue2 = 0; 
    float fRet = 0.0; 
    printf("Please enter total marks"); 
    scanf("%d",&iValue1); 
    printf("Please enter obtained marks"); 
    scanf("%d",&iValue2); 
    fRet = Percentage(iValue1, iValue2); 
    printf("%.2f%% is the percentage ",fRet);
    return 0;
}