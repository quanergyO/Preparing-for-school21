#include <stdio.h>

void go_south_east(int * lat, int * lon)
{
    *lat -= 1;
    *lon += 1;
}

int main(void)
{
    int latitude = 32;
    int longitude = -64;
    go_south_east(&latitude, &longitude);
    printf("our coordinats is: [%d, %d]\n", latitude, longitude);

    return 0;
}
