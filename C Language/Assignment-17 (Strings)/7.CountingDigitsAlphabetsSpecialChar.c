#include <stdio.h>

int main()
{
    // char str[50] = "aabcccdde";

    char str[50];
    printf("Enter String: ");
    scanf("%s", str);
    int alpha = 0, digits = 0, specialChar = 0;

    for (int i = 0; str[i]; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
            alpha++;
        else if (str[i] >= '0' && str[i] <= '9')
            digits++;
        else
            specialChar++;
    }

    printf("Alphabets are: %d\n", alpha);
    printf("Digits are: %d\n", digits);
    printf("Special Characters are: %d\n", specialChar);
    printf("\n");
    return 0;
}