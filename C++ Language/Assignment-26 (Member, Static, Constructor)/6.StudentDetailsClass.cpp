/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

class Student {
private:
    string name;
    int rollNo;
    int age;

public:
    Student()
    {
        // default constructor
    }

    Student(string name, int roll, int age)
    {
        rollNo = roll;
        this->age = age;
        this->name = name;
    }

    void setStudent(string name, int roll, int age)
    {
        this->name = name;
        rollNo = roll;
        this->age = age;
    }

    void showStudent()
    {
        cout << "Name: " << name << nl;
        cout << "Age: " << age << nl;
        cout << "Roll number: " << rollNo << nl;
    }
};

int main()
{
    Student s1;
    s1.setStudent("Alex", 32, 12);
    s1.showStudent();
    Student s2("Prince", 69, 25);
    s2.showStudent();

    cout << nl;
    return 0;
}