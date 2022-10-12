#include "class.h"

makepoint::makepoint(int &min_range, int &max_range, int &number):number(number)
{
    if(p)
    {
        delete[] p;
    }

    p = new POINT[this->number];

    srand((unsigned int)time(NULL));

    for(int i = 0; i < this->number; i++)
    {
        p[i].x = rand() % (max_range + 1 - min_range) + min_range; //min부터 max까지 범위
        p[i].y = rand() % (max_range + 1 - min_range) + min_range; //min부터 max까지 범위
    }

    cout << endl << "points:" << endl;

    for(int i = 0; i < this->number; i++)
    {
        cout << "(" << p[i].x << "," << p[i].y << ")" << endl;
    }

    min_distance();
    max_distance();
}

makepoint::~makepoint()
{
    delete[] p;
}

void makepoint::min_distance()
{
    int temp = 0, min = 0;

    for(int i = 0; i < number; i++)
    {
        for(int j = i + 1; j < number; j++)
        {
            temp = pow((p[i].x - p[j].x), 2) + pow((p[i].y - p[j].y), 2);

            if(i == 0 && j == 1)
            {
                min = temp;

                min1.x = p[i].x;
                min1.y = p[i].y;
                min2.x = p[j].x;
                min2.y = p[j].y;

                continue;
            }

            if(min > temp)
            {
                min = temp;

                min1.x = p[i].x;
                min1.y = p[i].y;
                min2.x = p[j].x;
                min2.y = p[j].y;
            }
        }
    }

    this->min = sqrt(min);

    cout << endl << "when p1(" << min1.x << ", " << min1.y << "), p2(" << min2.x << ", " << min2.y << ")" << endl;
    cout << "min distance is " << this->min << endl;
}

void makepoint::max_distance()
{
    int temp = 0, max = 0;

    for(int i = 0; i < number; i++)
    {
        for(int j = i + 1; j < number; j++)
        {
            temp = (pow((p[i].x - p[j].x), 2)) + (pow((p[i].y - p[j].y), 2));

            if(i == 0 && j == 1)
            {
                max = temp;

                max1.x = p[i].x;
                max1.y = p[i].y;
                max2.x = p[j].x;
                max2.y = p[j].y;

                continue;
            }

            if(max < temp)
            {
                max = temp;

                max1.x = p[i].x;
                max1.y = p[i].y;
                max2.x = p[j].x;
                max2.y = p[j].y;
            }
        }
    }

    this->max = sqrt(max);

    cout << endl << "when p1(" << max1.x << ", " << max1.y << "), p2(" << max2.x << ", " << max2.y << ")" << endl;
    cout << "max distance is " << this->max << endl << endl;
}
