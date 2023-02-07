#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char text[100];
    fgets(text, 100, stdin);
    printf("%ld\n", strlen(text));
    return 0;
}
