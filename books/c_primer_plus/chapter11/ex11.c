#include <stdio.h>
#include <string.h>

#define LINES 10 
#define SIZE 100

void input_text(char array[][SIZE], char *arr[LINES]);
int menu(void);
void output_original(char array[][SIZE]);
void compare_ASCII(char *array[LINES]);
void order_of_length(char *array[LINES]);
void output_pointer(char *array[LINES]);
void order_of_lengths_first_word(char *array[LINES]);

int main(int argc, char *argv[])
{
    char array[LINES][SIZE];
    char *sorted[LINES];
    char ch;
    input_text(array, sorted);
    int choise = 0;
    while (choise != 5)
    {
	choise = menu();
	switch (choise)
	{
	    case 1: output_original(array); break;
	    case 2: compare_ASCII(sorted); output_pointer(sorted); break;
	    case 3: order_of_length(sorted); output_pointer(sorted); break; 
	    case 4: order_of_lengths_first_word(sorted); output_pointer(sorted); break;
	    case 5: break;
	}
    } 
    puts("End!");
    return 0;
}

void order_of_lengths_first_word(char *array[LINES])
{
    int word_lengths[LINES];
    char *p[LINES];
    for (int i = 0; i < LINES; i++)
	p[i] = array[i];

    for (int i = 0; i < LINES; i++)
    {
	int count = 0;
	while (*p[i] != ' ' && *p[i] != '\n' && *p[i] != '\t' && *p[i] != '\0')
	{
	    count++; 
	    p[i]++;
	}
	word_lengths[i] = count;
    }
    
    for (int i = 0; i < LINES - 1; i++)
    {
	for (int j = i+1; j < LINES; j++)
	{
	    if (word_lengths[j] < word_lengths[i])
	    {
		int tmp = word_lengths[i];
		word_lengths[i] = word_lengths[j];
		word_lengths[j] = tmp;
		char *p_temp = array[i];
		array[i] = array[j];
		array[j] = p_temp;
	    }
	}
    }

}

void order_of_length(char *array[LINES])
{
    int string_lengths[LINES];
    for (int i = 0; i < LINES; i++)
	string_lengths[i] = strlen(array[i]);
    for (int i = 0; i < LINES - 1; i++)
    {
	for (int j = i+1; j < LINES; j++)
	{
	    if (string_lengths[j] < string_lengths[i])
	    {
		char *p_temp = array[i];
		int tmp = string_lengths[i];
		string_lengths[i] = string_lengths[j];
		string_lengths[j] = tmp;
		array[i] = array[j];
		array[j] = p_temp;
	    }
	}
    }
}

void compare_ASCII(char *array[LINES])
{
    char *temp;
    for (int top = 0; top < LINES - 1; top++)
	for (int seek = top + 1; seek < LINES; seek++)
	{
	   if (strcmp(array[top], array[seek]) > 0)
	   {
		temp = array[top];
		array[top] = array[seek];
		array[seek] = temp;
	   }
	}
}

void output_original(char array[][SIZE])
{
    puts("*******************");
    for (int i = 0; i < LINES; i++)
    {
	puts(array[i]);
    }
    puts("*******************");
}

void output_pointer(char *array[LINES])
{
    puts("*******************");
    for (int i = 0; i < LINES; i++)
    {
	puts(array[i]);
    }
    puts("*******************");
}

void input_text(char array[][SIZE], char *arr[LINES])
{
    for (int i = 0; i < LINES; i++)
    {
	fgets(array[i], SIZE, stdin);
	array[i][strlen(array[i]) - 1] = '\0';
	arr[i] = array[i];
    }
}

int menu(void)
{
    puts("Select : 1/2/3/4/5");
    printf("1) output of the original list of strings\n");
    printf("2) output of strings according to the ASCII mapping sequence\n");
    printf("3) output of strings in ascending order of length\n");
    printf("4) output of strings in ascending order of the length of the first word in the string\n");
    printf("5) quit\n");
    int n;
    scanf("%d", &n);
    getchar();
    return n;
}
