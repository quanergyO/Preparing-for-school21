#include <stdio.h>

int main(void)
{
    int count;
    scanf("%d", &count);
    int arr[count];
    int s, h;
    for (int i = 0; i < count; i++)
    {
       scanf("%d%d%d", &s, &arr[i], &h);
    }
    int answer = 0;
    for (int i = 0; i < count; i++)
    {
        for (int j = i+1; j < count; j++)
        {
            if (arr[i] == arr[j])
            {
                answer--;
                break;
            }

        }
        answer++;
    }
    printf("%d\n", answer);
    return 0;
}
