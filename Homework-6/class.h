#ifndef CLASS_H
#define CLASS_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class file
{
public:
    string column;
    int rowindex;

    void getcolumn(vector<string> columns, int &cnt);
    void printcolumn(vector<vector<double>> vec2, int &cnt);
    void getrowindex(vector<vector<double>> vec2);
    void sortcolumn(vector<vector<double>> vec2, int &cnt);
};

#endif // CLASS_H
