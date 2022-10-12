//2021741034 백종욱
#include <iostream>
#include <string>

using namespace std;

int IsNumber(string calculate, int *i)
{
    int num, count;
    char temp[100] = {0, };

    for(count = 0; calculate[*i] >= 48 && calculate[*i] <= 57; (*i)++)//아스키코드로 숫자인지 판별
    {
         temp[count] = calculate[*i];
         count++;
    }

    num = atoi(temp);
    return num;
}

void IsNegative(string calculate, int *i, bool *negative)
{
    if(calculate[*i] == '-')
    {
        *negative = true;
        (*i)++;
    }

    else
        *negative = false;
}

void Output(int *a, int *b, char *c)
{
    switch(*c)
    {
    case '+' :
        cout << *a << " " << *c << " " << *b << " = " << *a + *b << endl;
        break;
    case '-' :
        cout << *a << " " << *c << " " << *b << " = " << *a - *b << endl;
        break;
    case '*' :
        cout << *a << " " << *c << " " << *b << " = " << *a * *b << endl;
        break;
    case '/' :
        if(*b == 0)//0으로 나누기 예외 처리
        {
            cout << "Please input the proper operator symbol." << endl;
            break;
        }
        cout << *a << " " << *c << " " << *b << " = " << *a / *b << endl;
        break;
    case '%' :
        if(*b == 0)
        {
            cout << "Please input the proper operator symbol." << endl;
            break;
        }
        cout << *a << " " << *c << " " << *b << " = " << *a % *b << endl;
        break;
    default ://올바른 계산식이 아닐 경우 예외처리
        cout << "Please input the proper operator symbol." << endl;
    }
}

int main()
{
    string calculate;
    int a, b;
    char c;

    while(1)
    {
        cout << "? ";
        getline(cin, calculate);

        if(calculate == "quit")
            break;

        else
        {
            int i = 0;
            bool negative = false;

            IsNegative(calculate, &i, &negative);
            a = IsNumber(calculate, &i);
            if(negative == true)
                a *= -1;

            i += 1;//공백문자 카운트
            c = calculate[i];
            i += 2;

            IsNegative(calculate, &i, &negative);
            b = IsNumber(calculate, &i);
            if(negative == true)
                b *= -1;

            Output(&a, &b, &c);
        }
    }

    return 0;
}
