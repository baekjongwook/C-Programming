//2021741034 백종욱

#include "class.h"
#include <iostream>

using namespace std;

int main()
{
    Box a(10, 10, 10), b(20, 20, 20), c;

    c = a + b;

    if(a == b)
        cout << "same" << endl << endl;
    else
        cout << "different" << endl << endl;

    printBox(a);
    printBox(b);
    printBox(c);

    return 0;
}
