#include <stdio.h>

void Temperatures(const double far);

int main(void)
{
    double tmp_far;
    int ret = scanf("%lf", &tmp_far);
    while (ret == 1)
    {
	Temperatures(tmp_far);
	ret = scanf("%lf", &tmp_far);
    }
    return 0;
}

void Temperatures(const double far)
{
    const double cel = 5.0 / 9.0 * (far - 32);
    const double kel = cel + 273.15;
    printf("far = %lf cel = %lf kel = %lf\n", far, cel, kel);
}
