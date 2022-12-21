#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];
    printf("Enter String:\n");
    scanf("%s", str);
    int size = strlen(str);

    // Bubble sort

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (str[j] > str[j + 1]) {
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }

    printf("After Sorting:\n");
    printf("%s", str);

    printf("\n");
    return 0;
}