#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    char card_name[3];
    puts("Type your card");
    scanf("%2s", card_name);
    int val = 0;
    switch (card_name[0])
    {
	case 'J':
	case 'Q':
	case 'K': val = 10; break;
	case 'A': val = 11; break;
	default: val = atoi(card_name);
    }
    if (3 <= val && val <= 6)
	puts("Counter++");
    else if (val >= 10)
	puts("Counter--");

    printf("value of card %d\n", val);
    return 0;
}

