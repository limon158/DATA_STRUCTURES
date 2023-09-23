// Code to traversing in string for finding a special character:

#include <stdio.h>
#include <string.h>

void find_char(char s[], int len, char key);

int main()
{
    char str[] = "this is a string";
    char key = 'a';
    int len = strlen(str);
    find_char(str, len, key);

    return 0;
}
void find_char(char str[], int len, char key)
{
    int i;
    for (i = 0; i < len; i++)
    {
        if (str[i] == key)
        {
            printf("\nchar %c is present in index %d in this string", key, i);
            return;
        }
    }
    printf("\nchar %c is not present in this string", key);
    return;
}