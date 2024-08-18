/*
    @author: princebansal_
*/

// Eg: Input:  "AbcDe"
//     Output: "aBCdE"

#include <iostream>
using namespace std;
#define nl '\n'
class MyString {
private:
    char str[100];

public:
    void setString()
    {
        cout << "Enter String: ";
        cin >> str;
    }
    void getString()
    {
        cout << str << nl;
    }

    void operator!()
    {
        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] >= 'A' && str[i] <= 'Z')
                str[i] = str[i] - 'A' + 'a';
            else
                str[i] = str[i] - 'a' + 'A';
        }
    }
};

int main()
{
    MyString s;
    s.setString();
    s.getString();

    !s;

    s.getString();

    return 0;
}