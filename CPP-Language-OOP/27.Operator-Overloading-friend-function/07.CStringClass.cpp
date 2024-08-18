/*
    @author: princebansal_
*/

#include <cstring>
#include <iostream>
using namespace std;
#define nl '\n'
#define MAX 100

class CString {
private:
    char str[MAX];

public:
    void setString()
    {
        cout << "Enter string: ";
        // cin.ignore();
        // cin.getline(str, 100);
        cin >> str; // will take input till space or new line
    }

    void getString()
    {
        cout << str << nl;
    }

    // Declaring operator+
    CString operator+(CString);

    // Comparing C style strings
    bool operator==(CString& S2)
    {
        //    bool ans = (str == S2.str); // don't do these, it compares base addresses of s1 and s2 strings
        int i = 0;
        while (str[i] != '\0') {
            // cout << str[i] << " " << S2.str[i] << nl;
            if (str[i] != S2.str[i])
                return false;
            i++;
        }
        return true;
    }
};

// Defining custom + operator to concatenate C style strings
// (Defining ouside the class, just for fun)
// Syntax:
// returnType ClassName :: functionName(args..){...}
CString CString::operator+(CString S2)
{
    CString ans;
    strcpy(ans.str, str); // copying data of s1 (caller) to temporary ans string
    strcat(ans.str, S2.str); // concatenating passed argument (s2 string) with new string and returning the result
    return ans;
}

int main()
{
    CString s1;
    s1.setString();
    s1.getString();

    CString s2;
    s2.setString();
    s2.getString();

    CString s3 = s1 + s2;
    cout << "After concatenation s1 and s2 string: ";
    s3.getString();

    if (s1 == s2)
        cout << "Same Strings" << nl;
    else
        cout << "Not Same" << nl;

    return 0;
}