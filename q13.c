#include<stdio.h>

float fx(float x)
{
	return(1/(1+(x*x)));
}

int main()
{
	printf("Achintya Mishra \t Section: A \t 20011857 \n");
	printf("For Equation: dx/(1+(x^2)):\n");
	int n;
	float a,b;
	printf("Enter the values of a and b: ");
	scanf("%f %f",&a,&b);
	
	printf("Enter the number into which the intervals should be divided: ");
	scanf("%d",&n);
	
	float h=(b-a)/n;
	float sum=fx(a)+fx(b);
    float j = a+h;
	int i = 1;
    while(1)
    {
        if(i%2 == 0)
            sum += 2*fx(j);
        else
            sum += 4*fx(j);
        i++;
        j+=h;
        if(j==b)
            break;
    }
    sum = (sum*h)/3;
	printf("The solution of the given Equation is: %f\n",sum);
	return 0;
}
