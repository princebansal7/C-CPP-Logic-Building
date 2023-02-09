#include <stdio.h>
#include <string.h>

int main()
{
    char usernameList[5][20] = { "princebansal_", "github07", "bansalprince", "princebansal7", "princebansal07" };
    char username[15];

    printf("Enter username: ");
    scanf("%s", username);

    int flag = 0;
    for (int i = 0; i < 5; i++) {
        if (strcmp(username, usernameList[i]) == 0) {
            flag = 1;
            break;
        }
    }
    if (flag)
        printf("Hello \'%s\' you can calculate the factorial !! Hurrayyy", username);
    else
        printf("No user found!");
    printf("\n");
    return 0;
}