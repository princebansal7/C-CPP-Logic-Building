#include <stdio.h>
#include <string.h>

// way-1

// 1. reverse the string
// 2. match the original string with reversed string
// 3. if they match => Palindrome
//    if they doesn't match => Not Palindrome

// way-2 (Best)

int checkPalindrome(char str[])
{
    int size = strlen(str);
    int i = 0, j = size - 1, flag = 0;
    while (i < j) {
        if (str[i] != str[j]) {
            flag = 1;
            break;
        }
        i++;
        j--;
    }
    if (flag)
        return 0;
    return 1;
}

int main()
{
    // char str[50] = "aabba";

    char str[50];
    printf("Enter String: ");
    scanf("%s", str);

    if (checkPalindrome(str))
        printf("Palindrome string!!");
    else
        printf("Not Palindrome String");

    printf("\n");
    return 0;
}