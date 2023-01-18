#include <stdio.h>
#include <string.h>

// IP addresses are of 4 bytes seperated by .
// eg: 127.33.90.0
// each byte should be in range from 0-255 (then it will be valid ip)

// To solve:
// 1. Take IP input as string: "127.12.78.77"
// 2. Then we have to seperate those 4 bytes number (tokenisation): "127" "12" "78" "77"
// 3. Convert from string to number: 127 12 78 77
// 4. Then check whether all 4 lies between 0-255 or not:
// 0<=127<=255, 0<=12<=255, 0<=78<=255, 0<=77<=255 => valid else not valid
//---------------------------------------------------------------------------------------

int checkValidIP(char str[])
{
    char* p = strtok(str, '.');
    for (int i = 0; p[i]; i++)
        printf("%c", p[i]);
}

int main()
{
    int n;
    printf("How many IP addresses you want to enter: ");
    scanf("%d", &n);

    char str[n][20];

    printf("Enter IP addresses: \n");
    for (int i = 0; i < n; i++)
        scanf("%s", str[i]);

    printf("\nInvalid IP address are:\n");
    for (int i = 0; i < n; i++)
        if (checkValidIP(str[i]) == 0)
            printf("%s\n", str[i]);

    printf("\n");
    return 0;
}