#include <stdio.h> 
#include <math.h>
// first eqn 
// (1.0/3.0)*(cos (x) + 1); 
// differentiation=  fabs (- sin (x) / 3.0);

// second eqn 
// (1.0/2.0) * (log10f (x) + 7)
// differentiation= (1.0/2.0) * ((1/x) * (0.4343))

float func (float x) 
{
    return (1.0/2.0) * (log10f (x) + 7); 
}

float diff_func (float x)
{
    return (1.0/2.0) * ((1/x) * (0.4343)); // log (e), (with base 10) = 0.4343
}
int main () {

    printf("Name: Abhinav Bahuguna \t Student ID: 20011541\n"); 

    float x0, x, x1, err; 
    int iter=1; 
    printf ("Enter the value of x0: "); 
    scanf ("%f", &x0); 

    printf ("\nEnter the allowed value of error: "); 
    scanf("%f", &err); 

    if (diff_func(x0) > 1) {
        printf ("\nError. Try again with another value of x0"); 
        return -1; 
    }

    do {
        
        x = func (x0); 
        printf ("\nIteration =%d \t Root=%f", iter, x); 
        iter++; 

        x1 = func (x); 
        printf ("\nIteration =%d \t Root=%f", iter, x1); 
        iter++; 

        x0 = x1; 

    } while (fabs (x1 - x) > err); 

    printf ("\nRoots are: %f", x1); 

    return -1; 
}
