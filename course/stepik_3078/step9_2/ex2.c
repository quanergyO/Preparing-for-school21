#include <stdio.h>
#include <string.h>

int main(void)
{
    char text[100];
    char ch;
    int count = 0;
    fgets(text, 100, stdin);
    for (int i = 0; i < strlen(text); i++)
    {
        ch = text[i+1];
        if (text[i] != ' ' && ch == ' ')
            count++;
        if(i == strlen(text) - 1 && text[i] != ' '){
            count++;
            break;
        }
        if(text[i] == ' ' && text[i+1] == '\n'){
            break;
        }
   }
   printf("%d\n", count);    
   return 0;   
}
