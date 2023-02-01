#include <stdio.h>


int main(void)
{
    int friends = 5;
    int weeks = 0;
    int friend_out = 0;
    while (friends < 150)
    {
	weeks++;
	friends *= 2;
	friend_out += weeks;
	printf("week: %d friends: %d out: %d\n", weeks, friends, friend_out);
    }
    return 0;
}
