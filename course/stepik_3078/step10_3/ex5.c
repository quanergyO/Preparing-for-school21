#include <stdio.h>

void char_cesar(char *ch, int shift);

int main(void)
{
    char a;
    int shift;
    scanf("%c %d", &a, &shift);
    char_cesar(&a, shift);
    printf("%c\n", a);
    return 0;
}

void char_cesar(char *ch, int shift)
{
    *ch = (*ch - 'a' + shift) % 26 + 'a' ;
}
