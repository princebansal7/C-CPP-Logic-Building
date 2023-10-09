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
        cin.getline(str, 100);
    }

    void getString()
    {
        cout << str << nl;
    }

    // Defining custom + operator to concatenate C style strings
    CString operator+(CString S2)
    {
        CString ans;
        strcpy(ans.str, str); // copying data of s1 (caller) to temporary ans string
        strcat(ans.str, S2.str); // concatenating passed argument (s2 string) with new string and returning the result
        return ans;
    }
};

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

    return 0;
}