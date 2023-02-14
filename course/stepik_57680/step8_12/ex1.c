#include <stdio.h>
#include <assert.h>

struct Card {
    char rank;
    char suit;
};

void print_cards(struct Card * hand);
void read_cards(struct Card * hand);
int valid_card(struct Card * card);
int check(struct Card * hand);


int main(void)
{
    struct Card hand1[] = {{'Q', 's'}, {'A', 'h'}, {'9', 'd'}, {'0', '0'}};
    struct Card hand2[] = {{'2', 's'}, {'A', 'h'}, {'0', '0'}};
    struct Card hand3[] = {{'2', 's'}, {'8', 's'}, {'A', 's'}, {'K', 's'}, {'T', 's'}, {'0', '0'}};
    assert(1 == check(hand1));
    assert(0 == check(hand2));
    assert(0 == check(hand3));
    return 0;
}

int check(struct Card * hand)
{
    struct Card * p;
    for (p = hand; p->rank != '0'; p++)
        if (p->rank == 'Q' && p->suit == 's')
            return 1;
    return 0;
}

void print_card(struct Card * hand)
{
    struct Card *p;
    for (p = hand; p->rank != '0'; p++)
        printf("%c%c ", p->rank, p->suit);
    putchar('\n');
}

void read_card(struct Card * hand)
{
    struct Card *p;
    for (p = hand; scanf("%c%c", &p->rank, &p->suit) == 2; p++)
    {
        if (!valid_card(p))
            break;
    }
    p->rank = p->suit = 0;
}

int valid_card(struct Card * card)
{
    char * const suit = "cshd";
    char * const rank = "23456789TJQKA";
    int i;
    for (i = 0; suit[i] != '0'; i++)
    {
        if (suit[i] == card->suit)
            break;
    }
    if (suit[i] == '0')
        return 0;
    for (i = 0; rank[i] != '0'; i++)
    {
        if (rank[i] == card->rank)
            return 1;
    }

    return 0;
}
