#include <stdio.h>
#include <string.h>

char tracks[][80] = {
	"The innocent",
	"Blind",
	"Bring to life",
	"In The End",
	"Ghost Townd"
};

void find_track(char search_for[])
{
    for (int i = 0; i < 5; i++)
    {
	if (strstr(tracks[i], search_for))
	    printf("Song number %d: '%s'\n", i + 1, tracks[i]);
    }
}

int main(void)
{
    char search_for[80];
    printf("Search: ");
    fgets(search_for, 80, stdin);
    search_for[strlen(search_for) - 1] = '\0';
    find_track(search_for);
    return 0;
}
