#include "class.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    Account a("kitae", 1, 5000);
    a.deposit(50000);
    cout << a.getOwner() << "'s ballance : " << a.inquiry() << endl;
    int money = a.withdraw(20000);
    cout << a.getOwner() << "'s ballance : " << a.inquiry() << endl;

    return 0;
}
