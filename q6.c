#include <stdio.h>
#include <math.h>

float fx(float x)
{
  return ((x*x)*exp(-x/2)-1);
}

int main()
{
  float a, b, x, er;
  int it = 1;
  printf("Enter the values of a and b: ");
  scanf("%f%f",&a,&b);
  x = b - ((b - a) / (fx(b) - fx(a))) * fx(b);
  while(fx(x) != fx(b))
  {
    printf("%d iteration for x = %f\n",it,x);
    it++;
    a = b;
    b = x;
    x = b - ((b-a) / (fx(b) - fx(a))) * fx(b);
  }
  printf("Roots of equation are: %f after %d iterations\n",x,it-1);
  
  return 0;
}
