#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int round = 0, curly = 0, square = 0, angle = 0;

    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] == '(')
        {
          round++;
        }
        else if (str[i] == ')')
        {
          round--;
        }
        else if (str[i] == '{')
        {
          curly++;
        }
        else if (str[i] == '}') 
        {
          curly--;
        }
        else if (str[i] == '[')
        {
          square++;
        }
        else if (str[i] == ']')
        {
          square--;
        }
        else if (str[i] == '<') 
        {
          angle++;
        }
        else if (str[i] == '>') 
        {
          angle--;
        }
    }

    if (round == 0 && curly == 0 && square == 0 && angle == 0)
        printf("Valid\n");
    else
        printf("Invalid\n");
}

