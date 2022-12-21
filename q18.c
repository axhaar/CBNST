#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of Observations: ");
    scanf("%d",&n);
    float x[n],y[n];

    float sx=0,sy=0,sxy=0,sx2=0;
    for(int i=0;i<n;i++)
    {
        printf("Enter the value of x%d and y%d: ",i+1,i+1);
        scanf("%f %f",&x[i],&y[i]);
        sx+=x[i];
        sy+=y[i];
        sxy+=x[i]*y[i];
        sx2+=x[i]*x[i];
    }  
    float bxy=((n*sxy)-(sx*sy))/(n*sx2-(sx*sx));

    float a=(sy-bxy*sx)/n;
    printf("The value of Linear Regression Coefficient(bxy) is: %6.3f\n",bxy);
    printf("The Equation of Line is: %6.3f + %6.3f x \n",a,bxy);
    return 0;
}
