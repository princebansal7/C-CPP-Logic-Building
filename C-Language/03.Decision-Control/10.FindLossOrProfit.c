#include <stdio.h>

int main()
{
    float sp, cp;
    printf("Enter SP (selling price) & CP (cost price): ");
    scanf("%f %f", &sp, &cp);

    if (sp > cp) {
        int profitPercent = ((sp - cp) / cp) * 100;
        printf("Profit %% is: %d\n", profitPercent);
    } else {
        int lossPercent = ((cp - sp) / cp) * 100;
        printf("Loss %% is: %d\n", lossPercent);
    }

    return 0;
}