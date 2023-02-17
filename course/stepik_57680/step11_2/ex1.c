#include <stdio.h>

int main(void)
{
    char ch[10];
    int x = 0;
    int y = 0;
    int step;
    while ((scanf("%9s %d", ch, &step)) == 2)
    {
        switch (ch[0])
        {
            case 'N': y += step; break;
            case 'E': x += step; break;
            case 'S': y -= step; break;
            case 'W': x -= step; break;
        }
    }
    printf("%d %d\n", x, y);

    return 0;
}
