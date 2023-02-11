#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char city1[50];
    char city2[50];
    scanf("%s", city1);
    scanf("%s", city2);
    char first_c1 = toupper(city1[0]);
    char last_c1 = toupper(city1[strlen(city1)-1]);
    char first_c2 = toupper(city2[0]);
    char last_c2 = toupper(city2[strlen(city2)-1]);
    if (first_c1 == last_c2 || first_c2 == last_c1)
	puts("yes");
    else
	puts("no");
    return 0;
}
