#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    char card_name[3];
    puts("Type your card");
    scanf("%2s", card_name);
    int val = 0;
    if (card_name[0] == 'K')
    {
	val = 10;
    }
    else if (card_name[0] == 'Q')
    {
	val = 10;
    }
    else if (card_name[0] == 'J')
    {
	val = 10;
    }
    else if (card_name[0] == 'A')
    {
	val == 11;
    }
    else
	val = atoi(card_name);
    if (3 <= val && val <= 6)
	puts("Counter++");
    else if (val >= 10)
	puts("Counter--");

    printf("value of card %d\n", val);
    return 0;
}

