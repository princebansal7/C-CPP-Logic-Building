#include <stdio.h>

//  next prime number from the given number
// TSRS

int nextPrime(int a)
{
    int ans;
    for (int i = a + 1; i <= a + 100; i++) { // just for safety going till a higher range
        int flag = 1;
        if (i <= 1)
            flag = 0;
        else {
            for (int j = 2; j <= i / 2; j++) {
                if (i % j == 0) {
                    flag = 0;
                    break;
                }
            }
        }
        if (flag == 1) {
            ans = i;
            break;
        }
    }
    return ans;
}

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    int ans = nextPrime(a);

    printf("Next prime number from %d is: %d\n", a, ans);
    return 0;
}