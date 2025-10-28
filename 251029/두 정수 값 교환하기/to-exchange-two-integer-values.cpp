#include <iostream>

using namespace std;

int n, m;

void exchange(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main() {
    cin >> n >> m;

    // Please write your code here.
    exchange(n,m);

    cout << n << " " << m << endl;
    return 0;
}