#ifndef CLASS_H
#define CLASS_H

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

typedef struct point
{
    int x, y;
}POINT;

class makepoint
{
    int number;
    double min, max;
    POINT min1, min2, max1, max2;
    POINT *p;

public:
    makepoint(int &min_range, int &max_range, int &number);
    ~makepoint();

    void min_distance();
    void max_distance();
};

#endif // CLASS_H
