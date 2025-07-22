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

    // setter
    void setSalary(double s)
    {
        salary = s;
    }

    // getter
    double getSalary()
    {
        return salary;
    }
};

int main()
{
    Teacher t1;

    t1.name = "Shimol";
    t1.subject = "Cpp";
    t1.dept = "CSE";
    t1.setSalary(25000);

    cout << t1.name << endl;
    cout << t1.getSalary() << endl;

    return 0;
}