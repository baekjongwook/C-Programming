#include "class.h"

void file::getcolumn(vector<string> columns, int &cnt)
{
    cout << endl << "Input the column: ";
    cin >> column;

    for(int i = 0; i < columns.size(); i++)
    {
        if(column.compare(columns[i]) == 0)
        {
            cnt = i;
        }
    }
}

void file::printcolumn(vector<vector<double>> vec2, int &cnt)
{
    for(int i = 0; i < vec2.size(); i++)
        cout << vec2[i][cnt] << '\t' << endl;
}

void file::getrowindex(vector<vector<double>> vec2)
{
    cout << endl << "Input the row index: ";
    cin >> rowindex;
    cout << endl;

    for(int i = 0; i < vec2[rowindex - 1].size(); i++)
        cout << vec2[rowindex - 1][i] << '\t';

    cout << endl << endl;
}

void file::sortcolumn(vector<vector<double>> vec2, int &cnt)
{
    for(int i = 0; i < vec2.size(); i++)
    {
        for(int j = 0; j < vec2[cnt].size(); j++)
            cout << vec2[i][j] << '\t';
        cout << endl;
    }
}
