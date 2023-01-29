#include <stdio.h>

#define FT_IN_SM 30.48
#define INCH_IN_SM 2.54
#define INCH_IN_FT 12

int main(void)
{
    float sm;
    printf("Type height in sm: ");
    scanf("%f", &sm);
    while (sm > 0)
    {
	float inch = sm / INCH_IN_SM;
	printf("%d ft, %.1f inch\n", (int)(sm / FT_IN_SM), inch - (INCH_IN_FT * (int)(sm / FT_IN_SM)));
	printf("Type height in sm (<= 0 for quit): ");
	scanf("%f", &sm);
    }
}
