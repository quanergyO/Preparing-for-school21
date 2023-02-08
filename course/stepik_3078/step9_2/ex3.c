#include <stdio.h>
#include <string.h>

int main() {
    char search;
    int answer = -1;
    search = getchar();
    getchar();
    char array[100];
    fgets(array, 100, stdin);
    for (int i = 0; i < strlen(array); i++)
    {
        if (search == array[i])
        {
            answer = i;
            break;
        }
    }
    printf("%d\n", answer);
    return 0;
}
