#include <stdio.h>
#include <stdbool.h>

void type_two_numbers(float * num1, float * num2);

int main(void)
{
    char choise = '1';
    float num1, num2;
    while (choise != 'q')
    {
	printf("Choise operation\n");
	printf("c. sum             s. sub\n");
	printf("m. multiplication  d. division\n");
	printf("q. quit\n");
	choise = getchar();
	
	switch (choise)
	{
	    case 'c': type_two_numbers(&num1, &num2); printf("%f\n", num1 + num2); break;
	    case 's': type_two_numbers(&num1, &num2); printf("%f\n", num1 - num2); break;
	    case 'm': type_two_numbers(&num1, &num2); printf("%f\n", num1 * num2); break;
	    case 'd': type_two_numbers(&num1, &num2);
		      if (num2 == 0)
		      {
			printf("can't division by 0. Try again\n");
			continue;
		      }
		      else
			printf("%f\n", num1 / num2);
		        break;
	    case 'q': printf("END\n"); return 0;
	}
    }
    return 0;
}

void type_two_numbers(float * num1, float * num2)
{
    char ch;
    printf("Type first number: ");
    scanf("%f", num1);
    printf("Type second number: ");
    scanf("%f", num2);
    while (getchar() != '\n')
	continue;
}
