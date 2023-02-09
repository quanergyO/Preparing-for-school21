#include <stdio.h>
#include <string.h>

int main(void)
{
    char text1[14];
    char text2[14];
    scanf("%s", text1);
    scanf("%s", text2);
    int count = 0;
    for (int i = 0; i < strlen(text1); i++)
    {
	if (text1[i] != text2[i])
	{
	    count++;
	}	
    }
    printf("%d\n", count);
    return 0;
}
