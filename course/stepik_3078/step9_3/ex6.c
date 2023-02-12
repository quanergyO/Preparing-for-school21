#include <stdio.h>

int main(void)
{
    char num[7];
    fgets(num, 7, stdin);
    int f_num = num[0] + num[1] + num[2] - '0' * 3;
    int s_num = num[3] + num[4] + num[5] - '0' * 3;
    printf("%s\n", (f_num == s_num)? "yes": "no");
    return 0;
}
