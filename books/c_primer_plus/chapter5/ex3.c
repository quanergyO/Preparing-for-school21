#include <stdio.h>

int main(void)
{
    int day;
    const int DAY_IN_WEEK = 7;
    scanf("%d", &day);
    printf("%d days = %d weeks and %d days.\n", day, day / DAY_IN_WEEK, day - (DAY_IN_WEEK * (day / DAY_IN_WEEK)));

    return 0;
}
