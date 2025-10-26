#include <iostream>

using namespace std;

int a, b;

void abab(int a, int b)
{
    int orig = a;
    for(int i = 1; i < b; i++)
    {
       a *= orig; 
    }
    cout << a << endl;
}
int main() {
    cin >> a >> b;

    // Please write your code here.
    abab(a,b);

    return 0;
}