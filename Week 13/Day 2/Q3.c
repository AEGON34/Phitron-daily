#include <stdio.h>

int addDigits(const char *str)
{
    int sum = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] - '0') >= 0 && (str[i] - '0') <= 9)
        {
            sum += str[i] - '0';
        }
    }
    return sum;
}
int main()
{
    char input[100];
    gets(input);

    int result = addDigits(input);
    printf(" %d\n", result);

    return 0;
}
