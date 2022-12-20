#include <stdio.h>

int main()
{
    float units, currBillPay = 0, totalBill = 0;
    printf("Enter Units: ");
    scanf("%f", &units);

    switch (units <= 50) {
    case 1:
        currBillPay = units * 0.50;
        break;
    case 0: // => units are more than 50
        switch (units <= 150) {
        case 1:
            // bill for 1st 50 units = 50 * 0.50 = 25
            // remaining units = 100 - units
            currBillPay = 25 + (units - 50) * 0.75;
            break;

        case 0: //  =>units are more than 150
            switch (units <= 250) {
            case 1:
                // bill for 1st 50 units = 50 * 0.50 = 25
                // bill for next 100 units = 100 * 0.75 = 75
                // bill for 1st 150 units = 25 + 75 = 100
                currBillPay = 100 + (units - 150) * 1.20;
                break;
            case 0: // => units are more than 250
                // bill for 1st 50 units = 50 * 0.50 = 25
                // bill for next 100 units = 100 * 0.75 = 75
                // bill for next 100 units = 100 * 1.20 = 120
                // bill for 1st 250 units = 25 + 75 + 120 = 220
                currBillPay = 220 + (units - 250) * 1.50;
                break;
            }
            break;
        }
        break;
    }
    totalBill = currBillPay + currBillPay * 0.20;
    printf("\nTotal bill is: %.2f \n", totalBill);
}