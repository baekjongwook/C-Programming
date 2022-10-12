//2021741034 백종욱
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("C:\\windows\\system.ini");

    if(!fin)
    {
        cout << "fail to open C:\\windows\\system.ini" << endl;
        return 0;
    }

    string line;
    int count = 1;

    while(getline(fin, line))
    {
        cout << count << ":" << line << endl;
        count++;
    }

    fin.close();

    return 0;
}

