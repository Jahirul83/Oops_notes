#include <bits/stdc++.h>
using namespace std;



/**
 * Encapsulation is wrapping up of data and member function in a single unit called class.
 * 
 * data hiding --> private
 */
class Account
{
private:
    double balance;
    string password;

public:
    string accountId;
    string username;
};

int main()
{

    Account a1,a2;
    // Account a2;
    a1.username = "sohag360";
    a2.username = "asif34";

    cout << a1.username << endl;
    cout << a2.username << endl;
    return 0;
}