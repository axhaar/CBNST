#include<stdio.h>
#include<math.h>

float fx(float x)
{
   return((3*x)+sin(x)-exp(x));
}

int main()
{
   printf("For Equation: 3x+sin(x)-e^x \n");
   
   float a,b,er;
   int it=1;
   
   printf("Enter the values of a and b: \n");
   scanf("%f %f", &a, &b);
   
   if(fx(a)*fx(b)<0)
   {
      printf("Roots found at %0.3f and %0.3f \n",a,b);
      printf("Enter the allowed error: ");
      scanf("%f",&er);
      
      float x= a-((b-a)/(fx(b)-fx(a)))*fx(a);
      
      while(fabs(fx(x))>er)
      {
        x= a-((b-a)/(fx(b)-fx(a)))*fx(a);
        printf("%d Iteration for %f and %f, the value x is: %f \n",it,a,b,x);
        
        if(fabs(fx(x))<er)
           printf("Roots Found at: %f",x);
        else if(fx(a)*fx(x)<0)
           b=x;
        else if(fx(x)*fx(b)<0)
           a=x;
        it++;
      }
   }
   else
   {
     printf("Wrong Intervall try again!! \n");
   }
   return 0;
 }
