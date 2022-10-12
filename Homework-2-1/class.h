#ifndef CLASS_H
#define CLASS_H

#include <iostream>
#include <string>

using namespace std;

class Account
{
    string name;
    int id;
    int balance;

public:
    Account(string name, int id, int balance):name(name), id(id), balance(balance){}

    void deposit(int money)
    {
        balance += money;
    }

    string getOwner()
    {
        return name;
    }

    int inquiry()
    {
        return balance;
    }

    int withdraw(int money)
    {
        if(balance < money)
        {
            cout << "there is not enough money to withdraw" << endl;
            cout << "you can withdraw " << balance << "won." << endl;

            balance = 0;
            money = balance;
        }
        else
            balance -= money;

        return money;
    }
};

#endif // CLASS_H
