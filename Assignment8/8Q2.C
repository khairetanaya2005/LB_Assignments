/*

2. Write a program which accept width & height of rectangle from user and calculate 
its area. (Area = Width * Height)

Input : 5.3 9.78
Output : 51.834

*/

#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{

    
    float fArea=0.0f;

    fArea=fWidth*fHeight;

    return fArea;

}


int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;
    
    printf("Enter width: ");
    scanf("%f",&fValue1);
    
    printf("Enter height: ");
    scanf("%f",&fValue2);
    
    dRet = RectArea(fValue1, fValue2);
    
    printf("Area of rectangle is: %lf\n", dRet);
    
    return 0;
}
