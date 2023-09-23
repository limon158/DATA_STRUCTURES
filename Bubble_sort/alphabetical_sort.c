
//A programme to sort a wordlist(alphabetical order) by using Bubble sort
#include<stdio.h>
int main()
{
    char name[] = {'P', 'E', 'O', 'P', 'L', 'E'};
    int n = sizeof(name) / sizeof(name[0]);
    
    int i, j, k, temp;
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i; j++)
        {
            if(name[j] > name[j + 1])
            {
                temp = name[j];
                name[j] = name[j + 1];
                name[j + 1] = temp;
            }
        }
    }

    for(k = 0; k < n; k++)
    {
        printf("%c\t", name[k]);
    }
    return 0;
}