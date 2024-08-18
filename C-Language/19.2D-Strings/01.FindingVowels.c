#include <stdio.h>

int main()
{
    int n;
    printf("How many strings you want to enter: ");
    scanf("%d", &n);

    char str[n][20];

    printf("Enter strings: \n");

    for (int i = 0; i < n; i++)
        scanf("%s", str[i]);

    for (int i = 0; i < n; i++) {
        int vowelCount = 0;
        for (int j = 0; str[i][j]; j++) {
            if (str[i][j] == 'a' || str[i][j] == 'e' || str[i][j] == 'i' || str[i][j] == 'o' || str[i][j] == 'u')
                vowelCount++;
        }
        printf("Vowels in \"%s\" is: %d\n", str[i], vowelCount);
    }

    return 0;
}