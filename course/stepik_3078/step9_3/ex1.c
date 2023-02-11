#include <stdio.h>
#include <string.h>

#define SIZE 30 

int main(void)
{
    char h[SIZE] = "Hello, ";
    char text[SIZE];
    scanf("%s", text);
    strcat(h, text);
    printf("%s\n", h);
    return 0;
}
