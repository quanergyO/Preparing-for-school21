#include <stdio.h>

int main(void)
{
    int num;
    printf("Type second operand:");
    scanf("%d", &num);
    int fs;
    printf("Type first operand:");
    scanf("%d", &fs);
    while (fs > 0)
    {
	printf("%d %% %d = %d\n", fs, num, fs % num);
	scanf("%d", &fs);
    }

    return 0;
}
