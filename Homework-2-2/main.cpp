//2021741034 백종욱

#include "class.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int main()
{
    int min_range;
    int max_range;
    int number;

    while(1)
    {
        cout << "Input min range of points: ";
        cin >> min_range;

        cout << "Input max range of points: ";
        cin >> max_range;

        if(min_range >= max_range)
            cout << endl << "max range must be larger than min range." << endl;
        else
        {
            break;
        }
    }

    while(1)
    {
        cout << "Input number of points: ";
        cin >> number;

        if(number < 2)
            cout << endl << "The number you can make points is at least 2." << endl;
        else
        {
            makepoint a(min_range, max_range, number);
            break;
        }
    }

    return 0;
}
