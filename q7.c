#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    float a[n][n+1],backs[n];
    printf("Enter the matrix:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            scanf("%f",&a[i][j]);
        }
    } 
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        { 
            if(j>i)
            { 
                float r=a[j][i]/a[i][i];
                for(int k=0;k<n+1;k++)
                {
                    a[j][k]=a[j][k]-(r*a[i][k]);
                }
            }
        }
    } 

    backs[n-1]=a[n-1][n]/a[n-1][n-1];
    for(int i=n-2;i>=0;i--)
    {
        float s=0;
        for(int j=i+1;j<n;j++)
        {
            s+=a[i][j]*backs[j];
        } 
        backs[i]=(a[i][n]-s)/a[i][i];

    }

    printf("The Values of unknowns are:\n");
    for(int i=0;i<n;i++)
        printf("x%d: %6.0f\n",i,backs[i]);

    printf("Upper Triangular Matrix\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n+1;j++)
        {
            printf("%6.0f ",a[i][j]);
        } 
        printf("\n");
    }
    return 0;
}
