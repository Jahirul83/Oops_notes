#include <bits/stdc++.h>
using namespace std;

/**
 * Special method invoked automatically at time of object creation. Used for initialisation.
 *
 *
 * --> same name as class
 * --> Constructor doesn't have a return type
 * --> only called once (automatically), at object creation
 * --> Memory allocation happens when constructor is called
 */

class Teacher
{
private:
    double salary;

public:
    // properties / attributes
    string name;
    string dept;
    string subject;

    // non-parameterized
    Teacher()
    {
        cout << "hi I am constructor " << endl;
        dept = "Computer Science and Engineering";
    }

    // parameterized
    Teacher(string name, string dept, string subject, double salary)
    {
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }

    // methods/ member function
    void getInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Subject: " << subject << endl;
    }
};

int main()
{
    Teacher t1("shimol", "CSE", "Cpp", 24000);
    // Teacher t2;
    t1.getInfo();

    return 0;
}