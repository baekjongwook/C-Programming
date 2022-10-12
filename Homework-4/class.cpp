#include "class.h"

void MyStack::push(const int &n)
{
    top++;
    put(top, n);
}

int MyStack::pop()
{
    int pop = get(top);
    top--;

    return pop;
}

int MyStack::capacity()
{
   return getCapacity();
}

int MyStack::length()
{
    return top + 1;
}
