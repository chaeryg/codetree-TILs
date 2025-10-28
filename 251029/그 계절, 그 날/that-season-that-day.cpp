#include <iostream>

using namespace std;

int Y, M, D;

bool isLeapYear(int Y)
{
    if(Y % 4 != 0) return false;

    if(Y % 100 == 0 && Y % 400 != 0) return false;

    return true;
}

void yourWeather(int Y, int M, int D)
{
    int monthGeneral[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    int monthLeap[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31};

    if(isLeapYear(Y))
    {
        if(D > monthLeap[M])
        {
            cout << "-1" << endl;
            return;
        }

    }
    else
    {
        if(D > monthGeneral[M])
        {
            cout << "-1" << endl;
            return;
        }
    }

    if(3 <= M && M <= 5)
    {
        cout << "Spring" << endl;
    }
    else if(6 <= M && M <= 8)
    {
        cout << "Summer" << endl;
    }
    else if(9 <= M && M <= 11)
    {
        cout << "Fall" << endl;
    }
    else
    {
        cout << "Winter" << endl;
    }
}
int main() {
    cin >> Y >> M >> D;

    // Please write your code here.
    yourWeather(Y,M,D);

    return 0;
}