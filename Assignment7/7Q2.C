/*

2. Accept amount in US dollar and return its corresponding value in Indian currency. 
Consider 1$ as 70 rupees. 

Input : 10
Output : 700

Input : 3
Output : 210   (Note: assignment text says 270 by typo, but 3 * 70 = 210)

Input : 1200
Output : 84000


*/

#include<stdio.h>

int DollarToINR(int iNo)
{
    

    return iNo * 70;
}

int main()
{

    int iValue = 0, iRet = 0;
    
    printf("Enter number of USD: ");
    scanf("%d",&iValue);
    
    iRet = DollarToINR(iValue);
    printf("Value in INR is %d\n",iRet);
    
    return 0;
}
