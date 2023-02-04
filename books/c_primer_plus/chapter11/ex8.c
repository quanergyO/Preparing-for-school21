#include <stdio.h>
#include <string.h>

char * string_in(const char * s1, const char * s2);

int main(int argc, char **argv)
{
    char * p = string_in("dannie", "an");
    char * p2 = string_in("keva", "va");
    char * p1 = string_in("ass", "b");
    printf("p = %c, p2 = %c\n", *p, *p2);
    return 0;
}

char * string_in(const char * s1, const char * s2)
{
    int s1_len = strlen(s1);
    int s2_len = strlen(s2);
    printf("s1 len = %d s2 len = %d\n", s1_len, s2_len);
    int i, j;
    for (i = 0; i <= s1_len - s2_len; i++)
    {
	for (j = 0; j < s2_len; j++)
	{
	    printf("start with i = %d j = %d\n", i, j);
	    printf("s1[%d+%d] = %c s2[%d] = %c\n", i, j, s1[i+j], j, s2[j]);
	    if (s1[i+j] != s2[j])
	    {
		break;
	    }
	}
	if (j == s2_len)
	{
	    char * res = &s1[i];
	    puts("******************");
	    return res;
	}
    }   
    printf("return NULL\n"); 
    return NULL;
}
