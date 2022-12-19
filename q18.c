#include<stdio.h>
#include<conio.h>

#define S 50

int main()
{
    printf ("Achintya Mishra \t A \t 20011857\n"); 

 int n, i;
 float x[S], y[S], sumX=0, sumX2=0, sumY=0, sumXY=0, a, b;
 
 /* Input */
 printf("\nEnter the number of points: ");
 scanf("%d", &n);
 printf("\nEnter values of x: ");
 for(i=1;i<=n;i++)
 scanf("%f", &x[i]);

printf ("\nEnter values of y: "); 
for(i=1;i<=n;i++)
scanf("%f", &y[i]);
 
 /* Calculating Required Sum */
 for(i=1;i<=n;i++)
 {
  sumX = sumX + x[i];
  sumX2 = sumX2 + x[i]*x[i];
  sumY = sumY + y[i];
  sumXY = sumXY + x[i]*y[i];
 }
 /* Calculating a and b */
 b = (n*sumXY-sumX*sumY)/(n*sumX2-sumX*sumX);
 a = (sumY - b*sumX)/n;
 /* Displaying value of a and b */
 printf("A=%0.2f and B = %0.2f\n",a,b);
 printf("\nEquation: y = %0.2f + %0.2fx",a,b);

 return(0);
}
