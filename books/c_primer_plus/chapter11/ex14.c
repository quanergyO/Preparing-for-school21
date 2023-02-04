#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
    double number = atof(argv[1]);
    int exponent = atoi(argv[2]);    
    printf("%lf in a power %d = %lf\n", number, exponent, pow(number, exponent));
    return 0;
}
