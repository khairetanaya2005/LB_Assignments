/*
3. Write a program to find factorial of given number. 
Input : 5 
Output : 120 (5 * 4 * 3 * 2 * 1)
Input : -5 
Output : 120 (5 * 4 * 3 * 2 * 1)
Input : 4 
Output : 24 (4 * 3 * 2 * 1)
*/

#include <stdio.h>

int Factorial(int iNo)
{
    int iFact = 1;
    int iCnt=0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

  
    for (int iCnt = iNo; iCnt > 0; iCnt--)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter number: ");
    scanf("%d", &iValue);
    
    iRet = Factorial(iValue);
    printf("Factorial of number is %d\n", iRet);
    
    return 0;
}
