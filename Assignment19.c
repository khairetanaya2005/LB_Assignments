// 5.Write a program which accept number from user and return difference between summation of all its factors and non factors.

/*
    Input : 12
    Output : -34 (16 - 50)

    Input : 10
    Output : -29 (8 - 37)
*/

#include<stdio.h>

int FactDiff(int iNo)
{
    int i=0;
    int iSumFact = 0;
    int iSumNonFact = 0;

    if(iNo<0)
    {
        iNo= -iNo;
    }
    for (i=1;i<=iNo;i++)
    {
        if(iNo%i==0)
        {
            iSumFact=iSumFact+i;
    

        }
        else
        {
            iSumNonFact=iSumNonFact+i;
            
        }
        
    }
    return (iSumFact - iSumNonFact);
  
   
}

int main()
{

int iValue = 0;
int iRet = 0;

printf("enter number\n");
scanf("%d",&iValue);

iRet = FactDiff(iValue);

printf("%d",iRet);

return 0;
}
