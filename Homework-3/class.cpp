#include "class.h"

Box Box::operator +(Box op2)
{
    Box tmp;

    tmp.length = this->length + op2.length;
    tmp.width = this->width + op2.width;
    tmp.height = this->height + op2.height;

    return tmp;
}

bool Box::operator ==(Box op2)
{
    if(this->getvolume() == op2.getvolume())
        return true;
    else
        return false;
}

void printBox(Box box)
{
    cout << "Box Length: " << box.length << endl;
    cout << "Box Width: " << box.width << endl;
    cout << "Box Height: " << box.height << endl;
    cout << "Box Volume: " << box.getvolume() << endl << endl;
}
