#include <stdio.h>

int main(void)
{
    int n; scanf("%d", &n);
    char arr[n][n];
    for (int i = 0; i < n; i++)
        scanf("%101s", arr[i]);
    int count = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (arr[i][j] == '*')
                count++;
    printf("%d\n", count);
    return 0;
}
