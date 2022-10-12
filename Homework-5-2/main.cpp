//2021741034 백종욱
#include <iostream>

using namespace std;

int main()
{
    int n;

    while(true)
    {
        cout << "Enter a Number >>";
        cin >> n;

        try
        {
            if(cin.fail())
                throw "Terminated.";

            else if(n <= 0)
                throw "Enter a number from 1 to 9.";

            else
            {
                for(int i = 1; i < 9; i++)
                {
                    cout << n << 'x' << i << '=' << n * i << ' ';
                    cout << endl;
                }
            }
        }

        catch(const char* s)
        {
            cout << "Input Error. " << s << endl;

            cin.clear();
            cin.ignore(256, '\n');
        }
    }

    return 0;
}
