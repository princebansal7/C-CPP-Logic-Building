#include <stdio.h>

struct Time {
    int hour, min, sec;
};

// Way-1
struct Time timeDifference1(struct Time t1, struct Time t2)
{
    struct Time ans;
    int tsec1 = t1.hour * 3600 + t1.min * 60 + t1.sec;
    int tsec2 = t2.hour * 3600 + t2.min * 60 + t2.sec;

    int tempSec = (tsec1 > tsec2) ? tsec1 - tsec2 : tsec2 - tsec1;

    ans.hour = tempSec / 3600;
    ans.min = (tempSec % 3600) / 60;
    ans.sec = tempSec % 60;

    return ans;
}

// Way-2 (wrong)
struct Time timeDifference2(struct Time t1, struct Time t2)
{
    struct Time ans;
    struct Time diff;

    if (t2.sec > t1.sec) {
        --t1.min;
        t1.sec += 60;
    }

    ans.sec = t1.sec - t2.sec;

    if (t2.min > t1.min) {
        --t1.hour;
        t1.min += 60;
    }

    ans.min = t1.min - t2.min;
    ans.hour = t1.hour - t2.hour;

    return ans;
}

int main()
{
    struct Time t1, t2;
    printf("Enter Time-1 in HH:MM:SS format:\n");
    scanf("%d %d %d", &t1.hour, &t1.min, &t1.sec);

    printf("Enter Time-2 in HH:MM:SS format:\n");
    scanf("%d %d %d", &t2.hour, &t2.min, &t2.sec);

    printf("Enter Time1 in HH:MM:SS format:\n");

    // struct Time t = timeDifference1(t1, t2);
    struct Time t = timeDifference2(t1, t2);

    printf("\nDifference is:\n");
    printf("  %2d : %2d : %2d\n", t2.hour, t2.min, t2.sec);
    printf("- %2d : %2d : %2d\n", t1.hour, t1.min, t1.sec);
    printf("----------------\n");
    printf("  %2d : %2d : %2d\n", t.hour, t.min, t.sec);
    printf("----------------\n");

    printf("\n");
    return 0;
}