#include <iostream>

using namespace std;

int M, D;

bool confirmDate(int M, int D)
{
    if(M == 4 || M == 6 || M == 9 || M == 11)
    {
        if(D <= 30)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else if(M == 2)
    {
        if(D <= 28)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else if(M <= 12)
    {
        if(D <= 31)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}
int main() {
    cin >> M >> D;

    // Please write your code here.
    if(confirmDate(M,D))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}