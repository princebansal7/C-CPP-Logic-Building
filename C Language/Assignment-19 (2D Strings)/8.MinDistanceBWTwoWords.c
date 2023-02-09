#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char list[6][20] = { "prince", "is", "my", "name", "mittal", "bansal" };
    char word1[20], word2[20];
    int pos1 = -1, pos2 = -1, distance = 100;

    printf("\nGiven list of words is: \n[");
    for (int i = 0; i < 6; i++)
        printf("\"%s\", ", list[i]);
    printf("\b\b]");

    printf("\nEnter word1 & word2:\n");
    scanf("%s %s", word1, word2);

    // printf("\n%s %s", word1, word2);

    for (int i = 0; i < 6; i++) {
        if (strcmp(word1, list[i]) == 0)
            pos1 = i;
        if (strcmp(word2, list[i]) == 0)
            pos2 = i;
        if (pos1 != -1 && pos2 != -1) {
            int tempDistance = abs(pos2 - pos1);
            if (distance > tempDistance)
                distance = tempDistance;
        }
    }
    distance -= 1; // as indexing is from 0
    printf("\nDistance between \'%s\' and \'%s\' is: %d", word1, word2, distance);
    printf("\n");
    return 0;
}