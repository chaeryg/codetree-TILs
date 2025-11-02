#include <iostream>

using namespace std;

int N;

void recursive(int n)
{
    if(n==0) return;

    cout << n << " ";

    recursive(n-1);
    
    cout << n << " ";
}
int main() {
    cin >> N;

    // Please write your code here.

    recursive(N);
    return 0;
}