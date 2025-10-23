#include <iostream>

using namespace std;

int n, m;
int temp;
int r = 1;
int gcd(int n, int m)
{
    if(n < m)
    {
        temp = n;
        n = m;
        m = temp;
    }

    while(r != 0)
    {
        r = n % m;
        n = m;
        m = r;
    }

    return n;
}
int main() {
    cin >> n >> m;

    // Please write your code here.
    int r = gcd(n,m);
    cout << r << endl;
    return 0;
}