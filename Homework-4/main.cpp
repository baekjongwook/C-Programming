#include "class.h"
#include <iostream>

using namespace std;

int main()
{
    MyStack mS(100);
    int n;

    cout << "Input 5 numbers to insert into stack>> ";

    for(int i = 0; i < 5; i++)
    {
        cin >> n;
        mS.push(n);
    }

    cout << "capacity of stack: " << mS.capacity() << ", length of stack: " << mS.length() << endl;
    cout << "pop>> ";

    while(mS.length() != 0)
    {
        cout << mS.pop() << ' ';
    }

    cout << endl << "length of stack now: " << mS.length() << endl;

    return 0;
}
