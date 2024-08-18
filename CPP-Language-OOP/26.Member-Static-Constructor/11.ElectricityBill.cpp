/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

class Bill {
private:
    double units;

public:
    Bill(double unt = 0)
    {
        units = unt;
    }
    void setUnits(double unt)
    {
        units = unt;
    }

    double getUnits()
    {
        return units;
    }
    double getBill()
    {
        // Upto 100 unit RS.1.20 per unit
        // From 100 to 200 unit RS.2 per unit
        // Above 200 units RS.3 per unit.
        double amount = 0;
        if (units <= 100)
            return 1.20 * units;
        else if (units > 100 && units <= 200)
            return (1.20 * 100) + (2 * (units - 100));

        return (1.20 * 100) + (2 * 100) + (3 * (units - 200));
    }
};

int main()
{
    Bill b1;
    b1.setUnits(69);
    cout << "Bill-1 is RS " << b1.getBill() << " for " << b1.getUnits() << " units" << nl;

    Bill b2(150);
    cout << "Bill-2 is RS " << b2.getBill() << " for " << b2.getUnits() << " units" << nl;

    Bill b3(210);
    cout << "Bill-3 is RS " << b3.getBill() << " for " << b3.getUnits() << " units" << nl;

    return 0;
}