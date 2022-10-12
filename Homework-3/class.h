#ifndef CLASS_H
#define CLASS_H

#include <iostream>

using namespace std;

class Box{
    double length, width, height;
    bool isEmpty;

public:
    Box(double l, double w, double h):length(l), width(w), height(h)
    {
        isEmpty = true;
    }

    Box():length(0), width(0), height(0)
    {
        isEmpty = true;
    }

    double getvolume()
    {
        return length*width*height;
    }

    Box operator +(Box op2);
    bool operator ==(Box op2);
    friend void printBox(Box box);
};

#endif // CLASS_H
