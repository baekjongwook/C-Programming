//2021741034 백종욱
#include "class.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int cnt = -1;

bool com(const vector<double>& v1, const vector<double>& v2)
{
    return v1[cnt] < v2[cnt];
}

int main()
{
    file c;

    ifstream fin("C:\\Users\\BAEK\\Desktop\\hw6\\boston_house.csv");
    if(!fin)
    {
        cout << "fail to open boston_house.csv" << endl;
        return 0;
    }

    vector<vector<double>> vec2;
    vector<string> vec1, columns;
    vector<double> cvt;
    string line, index;
    bool count = true;

    while(getline(fin, line))
    {
        istringstream iss(line);
        while(getline(iss, index, ','))
        {
            vec1.push_back(index);
        }

        if(count == true)
        {
            for(int i = 0; i < vec1.size(); i++)
            {
                columns.push_back(vec1[i]);
            }

            vec1.clear();
            count = false;
        }

        else
        {
            for(int i = 0; i < vec1.size(); i++)
            {
                cvt.push_back(stod(vec1[i]));
            }

            vec2.push_back(cvt);

            cvt.clear();
            vec1.clear();
        }
    }

    while(1)
    {
        int num;

        cout << "<menu>" << endl;
        cout << "1. Print column" << endl;
        cout << "2. Print row index" << endl;
        cout << "3. Sort column" << endl;
        cout << "4. Exit" << endl;
        cout << "Choose the number>> ";
        cin >> num;

        switch(num)
        {
        case 1:
        {
            c.getcolumn(columns, cnt);

            if(cnt == -1)
            {
                cout << "Please input correct column!" << endl;
            }

            else
            {
                c.printcolumn(vec2, cnt);
            }

            cout << endl;

            break;
        }

        case 2:
        {
            c.getrowindex(vec2);

            break;
        }

        case 3:
        {
            c.getcolumn(columns, cnt);

            if(cnt == -1)
            {
                cout << "Please input correct column!" << endl;
            }

            else
            {
                sort(vec2.begin(), vec2.end(), com);
                c.sortcolumn(vec2, cnt);
            }

            break;
        }

        case 4:
            break;

        default:
        {
            cout << "Please input correct number!" << endl;
            break;
        }
        }

        if(num == 4)
            break;
    }

    fin.close();

    return 0;
}
