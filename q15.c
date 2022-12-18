#include<stdio.h>
int main()
{
    printf("Achintya Mishra \t Section: A \t 20011857\n");
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

    float arr[2][3];
    arr[0][0]=n;
    arr[0][1]=sx;
    arr[0][2]=sy;
    arr[1][0]=sx;
    arr[1][1]=sx2;
    arr[1][2]=sxy;

    for(int i=0;i<2;i++)
    {
      for(int j=0;j<2;j++)
      {
         if(j!=i)
         {
             float ratio=arr[j][i]/arr[i][i];
             for(int k=0;k<3;k++)
                arr[j][k]=arr[j][k] -( ratio * arr[i][k]);
         }
      }
    } 

    printf("\nIdentity Matrix Formed as:\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
            printf("% 0.2f ",arr[i][j]);
        printf("\n");
    }
    float a=(arr[0][2]/arr[0][0]);
    float b=(arr[1][2]/arr[1][1]);
    printf("\nThe Equation of line is y= %0.2f + %0.2f x\n",a,b);
    return 0;
}
