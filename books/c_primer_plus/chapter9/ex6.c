#include <stdio.h>

void sort_3(double * num1, double * num2, double * num3);

int main(void)
{
    double x, y, z;
    scanf("%lf%lf%lf", &x, &y, &z);
    sort_3(&x, &y, &z);
    printf("%lf %lf %lf\n", x, y, z); 
    return 0;
}
void sort_3(double * num1, double * num2, double * num3)
{
   double min, mid, max;
   min = (*num1 > *num2) ? (*num2 > *num3) ? *num3 : *num2 : (*num1 > *num3) ? *num3 : *num1;
   max = (*num1 > *num2) ? (*num1 > *num3) ? *num1 : *num3 : (*num2 > *num3) ? *num2 : *num3; 
   mid = *num1 + *num2 + *num3 - min - max;
   *num1 = min;
   *num2 = mid;
   *num3 = max;
}
