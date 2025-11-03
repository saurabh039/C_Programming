#include <stdio.h> 
void CheckNumberType(int iNum) 
{ 
    if (iNum > 0)
    {
        printf("%d is a Positive Number\n", iNum);
    }
    else if (iNum < 0)
    {
        printf("%d is a Negative Number\n", iNum);
    }
    else
    {
        printf("The number is Zero\n");
    }
} 

int main() 
{ 
    int iNumber; 
    printf("Enter iNumber: "); 
    scanf("%d", &iNumber); 
    CheckNumberType(iNumber); 
    return 0; 
} 