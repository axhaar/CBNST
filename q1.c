#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float true_val, approx_val, abs_err, rel_err, perc_err;
    scanf("%f",&true_val);
    scanf("%f",&approx_val);
    abs_err = fabs(true_val-approx_val);
    rel_err = fabs(abs_err/true_val);
    perc_err = rel_err * 100;
    printf("Absolute Error: %f\n",abs_err);
    printf("Relative Error: %f\n",rel_err);
    printf("Percentage Error: %f\n",perc_err);

    return 0;
}
