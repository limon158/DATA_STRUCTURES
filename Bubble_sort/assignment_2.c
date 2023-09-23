#include <stdio.h>
#include<conio.h>
#include <string.h>

void insertNewElement(char arr[][10], int *size, char element[])
{
    int i;

    for (i = *size - 1; i >= 0; i--) {
        strcpy(arr[i + 1], element);
        *size = *size + 1;
        break;

    }

return;
}

int main() {
    

    char word_list[][10]= {"Apple", "Ball", "Bag", "Cup", "End", "Lamp", "Luck"};

    int size = sizeof(word_list)/sizeof(word_list[0]);
    printf("\n size = %d", size);

    char element[10];
    printf("\nEnter Element here : ");
    gets(element);

    insertNewElement(word_list, &size, element);

    printf("\nSorted word list:\n");
    for (int i = 0; i < size; i++) {
        printf("%s\n", word_list[i]);
    }
    printf("\n size = %d", size);
    return 0;
}


void bubbleSort(char arr[][100], int n) {
    int i, j;
    char temp[100];

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }
}

