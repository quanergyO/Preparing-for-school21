#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

#define SIZE 50 

int main(void)
{
    char str1[SIZE];
    char str2[SIZE];
    bool flag = true;
    fgets(str1, SIZE, stdin);
    fgets(str2, SIZE, stdin);
    for (int i = 0; i < strlen(str1) - 1; i++)
    {
	if (toupper(str1[i]) != toupper(str2[i]))
	{
	    flag = false;
	    break;
	}
    }    
    if (strlen(str1) != strlen(str2))
	flag = false;
    printf("%s\n", (flag)? "yes": "no");
    return 0;
}

