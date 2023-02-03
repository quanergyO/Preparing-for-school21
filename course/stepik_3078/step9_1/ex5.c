#include <stdio.h>

int main(void)
{
    int k;
    scanf("%d", &k);
    char f = k + 'A' - 1;
    char s = k + 'a' - 1;
    printf("%c%c", f, s);
    return 0;
}
