
//A PROGRAMME TO SORT A WORDLIST (ALPHABETICAL ORDER) BY USING BUBBLE SORT:

#include <stdio.h>
#include <string.h>

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

int main() {
    int n, i;
    printf("Enter the number of words: ");
    scanf("%d", &n);

    char wordList[n][100];

    // Input words
    printf("Enter %d words:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%s", wordList[i]);
    }

    // Sort the word list
    bubbleSort(wordList, n);

    // Display the sorted word list
    printf("\nSorted word list:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", wordList[i]);
    }

    return 0;
}
