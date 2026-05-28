//Q2.Write a program which accept number from user and display its factors in

/*

decreasing order.

Input : 12
Output : 6 4 3 2 1

Input : 13
Output : 1

Input : 10
Output : 5 2 1

*/


#include<stdio.h>

void FactRev(int iNo)
{
     int i = 0;

    if (iNo <= 0)
    {
        iNo = -iNo;
    }

    for(i = iNo; i>=1; i--)
    {
        if (iNo % i == 0) 
        {
            printf("%d \t", i);
            
        }
        
    }
}


int main()
{

    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);


    FactRev(iValue);

    return 0;
}
