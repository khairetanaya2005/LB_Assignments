/*

4. Write a program to find odd factorial of given number. 

Input : 5 
Output : 15 (5 * 3 * 1)

Input : -5 
Output : 15 (5 * 3 * 1)

Input : 10 
Output : 945 (9 * 7 * 5 * 3 * 1)

*/

#include<stdio.h>

int OddFactorial(int iNo)
{
    int iFact = 1;
    int iCnt=0;

    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    
    for(int iCnt = iNo; iCnt > 0; iCnt--)
    {
        if(iCnt % 2 != 0)
        {
            iFact = iFact * iCnt;
        }
    }

    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter number: ");
    scanf("%d",&iValue);
    
    iRet = OddFactorial(iValue);
    printf("Odd Factorial of number is %d\n",iRet);
    
    return 0;
}
