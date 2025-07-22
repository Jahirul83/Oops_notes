#include <bits/stdc++.h>
using namespace std;

class Teacher
{
private:
    double salary;

public:
    // properties / attributes
    string name;
    string dept;
    string subject;


    // methods/ member function
    void changeDept(string newDept)
    {
        dept = newDept;
    }
};

int main()
{
    Teacher t1;

    t1.name = "Shimol";
    t1.subject = "Cpp";
    t1.dept = "CSE";
    // t1.salary = 25000;

    cout << t1.name << endl;
    // cout << t1.salary << endl;

    return 0;
}