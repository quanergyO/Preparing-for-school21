#include <stdio.h>
#include <string.h>

int main(void)
{
    char ar[31];
    char r[4];
    scanf("%s%s", ar, r);
    strcat(ar, ".");
    strcat(ar, r);
    puts(ar);
    return 0;
}
