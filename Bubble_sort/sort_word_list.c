
// A PROGRAMME TO SORT A WORDLIST (ALPHABETICAL ORDER) BY USING BUBBLE SORT:
#include <stdio.h>
#include <string.h>

void bubble_sort(char a[][50], int n) //Definition bubble sort function.
{
    int i, j;
    char temp[50];
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (strcmp(a[j], a[j + 1]) > 0)
            {
                strcpy(temp, a[j]);
                strcpy(a[j], a[j + 1]);
                strcpy(a[j + 1], temp);
            }
        }
    }
    return;
}

int main()
{
    char word_list[][50] = {"pen", "sad", "cat", "ant", "pan", "bed", "can", "but"};
    int n = sizeof(word_list) / sizeof(word_list[0]);

    bubble_sort(word_list, n); //Call bubble sort function.

    //Print sorted list.
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\n%s", word_list[i]);
    }
    return 0;
}

