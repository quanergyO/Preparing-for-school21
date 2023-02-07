#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    char card_name[3];
    int count = 0; 
    while ( card_name[0] != 'X') 
    {
	puts("Type your card");
        scanf("%2s", card_name);
        int val = 0;
        switch (card_name[0])
        {
            case 'J':
	    case 'Q':
	    case 'K': val = 10; break;
	    case 'A': val = 11; break;
	    case 'X': continue;
	    default: 
		val = atoi(card_name);
		if (val < 1 || val > 10)
		{
		    puts("try again");
		    continue;
		}
        }
        if (3 <= val && val <= 6)
	    count++;
        else if (val >= 10)
	    count--;
        printf("count is %d\n", count);
    }
    return 0;
}

