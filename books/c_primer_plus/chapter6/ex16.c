#include <stdio.h>

int main(void)
{
    float defina = 100;
    float deidra = 100;
    int years = 0;
    while (defina >= deidra)
    {
	defina += 10;
	deidra += deidra * 0.1;
	years++;
    }
    printf("after %d defina = %.2f deidra = %.2f\n", years, defina, deidra);

    
    return 0;
}
