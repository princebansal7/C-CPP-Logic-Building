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

int checkValidIP(char ip[])
{ // eg: ip "127.53.75.233"
    char* p = strtok(ip, "."); // p points to string 127
    int countOctets = 0;
    while (p != NULL) {
        int x = atoi(p); // x=127
        if (x >= 0 && x <= 255) {
            // printf("%d ", x);
            countOctets++;
        }
        p = strtok(NULL, "."); // p points to 53 and so on till NULL
    }
    if (countOctets == 4)
        return 1; // 1 being true
    return 0;
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

    printf("\nValid IP address are:\n");
    for (int i = 0; i < n; i++) {
        char temp[20]; // just for storing invalid string as in function original string will get modified
        strcpy(temp, str[i]);
        if (checkValidIP(str[i]) == 1)
            printf("%s\n", temp);
    }

    printf("\n");
    return 0;
}