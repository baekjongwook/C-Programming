#ifndef CLASS_H
#define CLASS_H

#include <iostream>

using namespace std;

class BaseArray{
private:
    int capacity;
    int *mem;

protected:
    BaseArray(int capacity = 0)
    {
        this->capacity = capacity;
        mem = new int [capacity];
    }

    ~BaseArray()
    {
       delete [] mem;
    }


    void put(int index, int val)
    {
        mem[index] = val;
    }

    int get(int index)
    {
        return mem[index];
    }

    int getCapacity()
    {
        return capacity;
    }
};

class MyStack:public BaseArray
{
private:
    int top = -1;

public:
    MyStack(int capacity):BaseArray(capacity){}

    void push(const int &n);
    int pop();
    int capacity();
    int length();
};

#endif // CLASS_H
