#include <iostream>

using namespace std;

int n;

bool isMagicNumber(int n)
{
    int ten = n / 10;
    int one = n % 10;

    if(n % 2 == 0 && (ten+one) % 5 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main() {
    cin >> n;

    // Please write your code here.
    if(isMagicNumber(n))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}